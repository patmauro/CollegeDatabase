//Patrick Mauro, CS203 Final Project
//Person.h
//Header for Person class
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {

public:
	Person(string, string, int);
	void setFirstName(string);
	void setLastName(string);
	string getFirstName();
	string getLastName();
	void setSsNum(int);
	int getSsNum();
	virtual void printPerson();
	int getCount();

protected:
	string firstName;
	string lastName;
	int ssNum;
	//static int count = 0;
};

#endif