#include "MyExampleInterface_impl.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

using namespace std;

void MyExampleInterface_impl::newQuestion(const char * q, const char * a)
{
	string qs = string(q);
	string ans = string(a);
	questions.push_back(qs);
	answers.push_back(ans);
}

char * MyExampleInterface_impl::getRandomQuestion()
{
	 char * qout = CORBA::string_alloc(100);

	 setRandomIndex();
	 string sqest = questions.at(randomIndex);
	
	 char * str = &sqest[0u];

	 strncpy(qout, str, 100);

	 return qout;
}

char * MyExampleInterface_impl::getQuestion(const short index)
{
	char * qout = CORBA::string_alloc(100);

	string sqest = questions.at(index);
	
	char * str = &sqest[0u];

	strncpy(qout, str, 100);

	return qout;
}

char * MyExampleInterface_impl::answerQuestion(const char * userAnswer)//make this return true or false
{
	char * result = CORBA::string_alloc(100);

	 string userAnswerString = string(userAnswer);

	 if(answers.at(randomIndex).compare(userAnswerString) == 0)
	 {	
		 strncpy(result, "True", 100);
		 return result;
	 }
	 else 
	 {	
		 strncpy(result, "False", 100);
		 return result;
	 }
}

void MyExampleInterface_impl::removeQuestion(const short index)
{	
	int actualIndex = index - 1;

	questions.erase(questions.begin()+actualIndex);
	answers.erase(answers.begin()+actualIndex);

	questions.shrink_to_fit();
	answers.shrink_to_fit();
}

void MyExampleInterface_impl::setRandomIndex()
{
	srand(time(0));
	randomIndex = rand()%questions.size();
}


short MyExampleInterface_impl::getSize()
{
	return questions.size();
}
