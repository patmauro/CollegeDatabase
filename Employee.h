//Patrick Mauro, CS203 Final Project
//Employee.h
//Header for Employee class
#ifndef EMP_H
#define EMP_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Employee : virtual public Person {

public:
	Employee(string, string, int, double);
	void setSalary(double);
	double getSalary();
	void printPerson();
	
protected:
	double salary;
};

#endif