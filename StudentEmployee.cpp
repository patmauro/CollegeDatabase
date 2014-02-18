//Patrick Mauro, CS203 Final Project
//Student.h
//Constructors for StudentEmployee class
#include <iostream>
#include <string>
#include "StudentEmployee.h"

using namespace std;

StudentEmployee::StudentEmployee(string nomen1, string nomen2, 
								int numero, double grade, double amt):
Person(nomen1, nomen2, numero),
Student(nomen1, nomen2, numero, grade),
Employee(nomen1, nomen2, numero, amt){}

void StudentEmployee::printPerson(){
	cout<<"Name: "<<
	firstName<<" "<<lastName<<
	"\nSS Number: "<<ssNum<<
	"\nGPA: "<<gpa<<
	"\nSalary: "<<salary<<
	endl;
	}