#include "example.hh"
#include <iostream>
#include <CORBA.h>
#include <Naming.hh>
#include <string>


/** Name is defined in the server.cpp */
#define SERVER_NAME		"MyServerName"

using namespace std;

const int listSize = 3;

//void answerQuestion(int index);

int main(int argc, char ** argv)
{
	try {
		//------------------------------------------------------------------------
		// Initialize ORB object.
		//------------------------------------------------------------------------
		CORBA::ORB_ptr orb = CORBA::ORB_init(argc, argv);

		//------------------------------------------------------------------------
		// Resolve service
		//------------------------------------------------------------------------
		ExampleInterface_ptr service_server = 0;

		try {

			//------------------------------------------------------------------------
			// Bind ORB object to name service object.
			// (Reference to Name service root context.)
			//------------------------------------------------------------------------
			CORBA::Object_var ns_obj = orb->resolve_initial_references("NameService");

			if (!CORBA::is_nil(ns_obj)) {
				//------------------------------------------------------------------------
				// Bind ORB object to name service object.
				// (Reference to Name service root context.)
				//------------------------------------------------------------------------
				CosNaming::NamingContext_ptr nc = CosNaming::NamingContext::_narrow(ns_obj);

				//------------------------------------------------------------------------
				// The "name text" put forth by CORBA server in name service.
				// This same name ("MyServerName") is used by the CORBA server when
				// binding to the name server (CosNaming::Name).
				//------------------------------------------------------------------------
				CosNaming::Name name;
				name.length(1);
				name[0].id = CORBA::string_dup(SERVER_NAME);
				name[0].kind = CORBA::string_dup("");

				//------------------------------------------------------------------------
				// Resolve "name text" identifier to an object reference.
				//------------------------------------------------------------------------
				CORBA::Object_ptr obj = nc->resolve(name);

				if (!CORBA::is_nil(obj)) {
					service_server = ExampleInterface::_narrow(obj);
				}
			}
		} catch (CosNaming::NamingContext::NotFound &) {
			cerr << "Caught corba not found" << endl;
		} catch (CosNaming::NamingContext::InvalidName &) {
			cerr << "Caught corba invalid name" << endl;
		} catch (CosNaming::NamingContext::CannotProceed &) {
			cerr << "Caught corba cannot proceed" << endl;
		}

		//------------------------------------------------------------------------
		// Do stuff
		//------------------------------------------------------------------------
		bool stillPlaying = true;

			if (!CORBA::is_nil(service_server)) 
			{
				for (int i = 0; i < listSize; i++) 
				{
					const char * qs;
					const char * ans;
					string quest;
					string answer;
					cout << "Enter Question: ";
					getline(cin,quest);
					cout << "Enter Answer:   ";
					getline(cin,answer);
					qs = quest.c_str();
					ans = answer.c_str();
					service_server->newQuestion(qs,ans);
					cout << endl;
				}
		do
		{
		cout << endl << "1. Ask me a question" << endl;
		cout << "2. Remove question" << endl;
		cout << "3. Exit" << endl;

		char option;
		cin >> option;

		cin.ignore();
		cout << endl;

		switch(option)
		{
			case '1': //Ask me a question
			{	
				if(service_server->getSize() > 0)
				{
					string ans;
					const char * userAnswer; 
					char * question;
					char * result;

					question = service_server->getRandomQuestion();
					cout << "Q: " << question << endl;
					cout << "A: ";

					getline(cin,ans);
					userAnswer = ans.c_str();

					result = service_server->answerQuestion(userAnswer);
					cout << result << endl;
				}
				else
				{
					cout << "You do not have any questions...goodbye" << endl;
					stillPlaying = false;
				}
				
			}
			break;//Ask me question

			case '2': //remove question
			{
				if(service_server->getSize() > 0)
				{
					int index;

					cout << "Which question would you like to remove?" << endl;
					for(int i = 0; i < service_server->getSize(); i++)
					{
						char * question = service_server->getQuestion(i);
						cout << i+1 << ": " << question << endl;
					}
					while(!(cin >> index)) {
						cin.clear();
						cin.ignore();
						cout << "Invalid input. Try again: " << endl;
					}
					if (index > service_server->getSize()) {
						cin.clear();
						cin.ignore();
						cout << "Invalid input. Try again: " << endl;
					}
					else {
						cin.ignore();
						service_server->removeQuestion(index);
					}
				}
				else
				{
					cout << "You do not have any questions...goodbye" << endl;
					stillPlaying = false;
				}
				
			}
			break;

			case '3'://exit
			{
				stillPlaying = false;
			}
			break;

			default:
			{
				cout << "That is not an option" << endl;
			}
		}
		}while(stillPlaying == true);
	}
		//------------------------------------------------------------------------
		// Destroy OBR
   		//------------------------------------------------------------------------
		orb->destroy();

	} catch (CORBA::UNKNOWN) {
		cerr << "Caught CORBA exception: unknown exception" << endl;
	}
}



// void answerQuestion(int index)
// {
// 	string userAnswerString;
// 	char * userAnswer;

// 	char * question = service_server->getRandomQuestion(index)
// 	cout << "Quesion: " << question << endl;
// 	cout << "Answer: ";
// 	getline(userAnswerString)
// 	userAnswer = userAnswerString.c_str();

// 	char * result = service_server->checkAnswer(index, userAnswer) //return true/false char

// 	cout << "Result: " << result << endl;
// }

