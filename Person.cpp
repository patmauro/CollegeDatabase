//Patrick Mauro, CS203 Final Project
//Person.cpp
//Constructors for Person class
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(string nomen1, string nomen2, int numero){
	firstName = nomen1;
	lastName = nomen2;
	ssNum =numero;
	}
void Person::setFirstName(string nomen1){
	firstName = nomen1;
	}
void Person::setLastName(string nomen2){
	lastName = nomen2;
	}
string Person::getFirstName(){
	return firstName;
	}
string Person::getLastName(){
	return lastName;
	}
void Person::setSsNum(int numero){
	ssNum = numero;
	}
int Person::getSsNum(){
	return ssNum;
	}
void Person::printPerson(){
	cout<<"Name: "<<
	firstName<<" "<<lastName<<
	"\nSS Number: "<<ssNum<<
	endl;
	}
/*int Person::getCount(){
	return count;
	}*/
