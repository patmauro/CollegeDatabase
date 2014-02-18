//Patrick Mauro, CS203 Final Project
//Student.h
//Header for Student class
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Student : virtual public Person {

public:
	Student(string, string, int, double);
	void setGpa(double);
	double getGpa();
	void printPerson();
	
protected:
	double gpa;
};

#endif