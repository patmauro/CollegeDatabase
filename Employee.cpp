//Patrick Mauro, CS203 Final Project
//Employee.h
//Constructors for Employee class
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string nomen1, string nomen2, int numero, double amt):
Person(nomen1, nomen2, numero){
	salary = amt;
	}
void Employee::setSalary(double amt){
	salary = amt;
	}
double Employee::getSalary(){
	return salary;
	}
void Employee::printPerson(){
	cout<<"Name: "<<
	firstName<<" "<<lastName<<
	"\nSS Number: "<<ssNum<<
	"\nsalary: "<<salary<<
	endl;
	}
