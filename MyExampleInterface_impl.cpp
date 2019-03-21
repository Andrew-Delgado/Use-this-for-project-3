/**
 * @authors Andrew Delgado and Christian Baiza
 * @date 2-20-2019
 * @version 1.0
 */

#include "MyExampleInterface_impl.h"
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

using namespace std;
/**
 * newQuestion method
 * @param q = question passed to server
 * @param a = answer passed to server
 * Allows client to create a question and answer
 * Then stores into seperate vectors
 */
void MyExampleInterface_impl::newQuestion(const char * q, const char * a)
{
	string qs = string(q);
	string ans = string(a);
	questions.push_back(qs);
	answers.push_back(ans);
}

/**
 * getRandomQuestion method
 * Allocate char * qout and use a random index to return random question
 */ 
char * MyExampleInterface_impl::getRandomQuestion()
{
	 char * qout = CORBA::string_alloc(100);

	 setRandomIndex();
	 string sqest = questions.at(randomIndex);
	
	 char * str = &sqest[0u];

	 strncpy(qout, str, 100);

	 return qout;
}

/**
 * getQuestion method
 * @param index = index of the question to return
 * Method to return one question from the questions vector
 * Used to return all the questions available to the client
 */ 
char * MyExampleInterface_impl::getQuestion(const short index)
{
	char * qout = CORBA::string_alloc(100);

	string sqest = questions.at(index);
	
	char * str = &sqest[0u];

	strncpy(qout, str, 100);

	return qout;
}

/**
 * answerQuestion method
 * @param userAnswer = Answer passed to server by client
 * Method to check answer against certain question
 * Returns true if answer is correct, false otherwise
 */ 
char * MyExampleInterface_impl::answerQuestion(const char * userAnswer)
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

/**
 * removeQuestion method
 * @param index = index of the question to remove
 * Used by client to remove a specific question and answer from server
 */ 
void MyExampleInterface_impl::removeQuestion(const short index)
{	
	int actualIndex = index - 1;

	questions.erase(questions.begin()+actualIndex);
	answers.erase(answers.begin()+actualIndex);

	questions.shrink_to_fit();
	answers.shrink_to_fit();
}

/**
 * setRandomIndex method
 * Used to return a random index for a random question
 */ 
void MyExampleInterface_impl::setRandomIndex()
{
	srand(time(0));
	randomIndex = rand()%questions.size();
}

/**
 * getSize method
 * Returns size of the questions vector
 */
short MyExampleInterface_impl::getSize()
{
	return questions.size();
}
