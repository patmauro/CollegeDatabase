//Patrick Mauro, CS203 Final Project
//Student.cpp
//Constructors for Student class
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string nomen1, string nomen2, int numero, double grade):
Person(nomen1, nomen2, numero){	
	gpa = grade;
	//this.count+=1;
	}
void Student::setGpa(double grade){
	gpa = grade;
	}
double Student::getGpa(){
	return gpa;
	}
void Student::printPerson(){
	cout<<"Name: "<<
	firstName<<" "<<lastName<<
	"\nSS Number: "<<ssNum<<
	"\nGPA: "<<gpa<<
	endl;
	}
