//Patrick Mauro, CS203 Final Project
//StudentEmployee.h
//Header for StudentEmployee class
#ifndef STUEMP_H
#define STUEMP_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Employee.h"

using namespace std;

class StudentEmployee : public Student, public Employee {

public:
	StudentEmployee(string, string, int, double, double);
	void printPerson();
};

#endif