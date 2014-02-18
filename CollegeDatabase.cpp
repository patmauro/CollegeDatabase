//Patrick Mauro, CS203 Final Project
//CollegeDatabase.cpp
//College Database: application of Person class hierarchy
#include <iostream>
#include <iomanip>
#include <string>
#include <list>

#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "StudentEmployee.h"

using namespace std;



//==========LOCAL FUNCTIONS:==========
//This serves as a "header" to a series of funtions we're going to define later.
//(It also establishes that later on, we'll be creating a list of pointers to People.)

void addStudent(list<Person*>&listOfPeople);
void addEmployee(list<Person*>&listOfPeople);
void addStudentEmployee(list<Person*>&listOfPeople);
void removePerson(list<Person*>&listOfPeople);
void printList(list<Person*> &listOfPeople);
void giveRaise(list<Person*> &listOfPeople);



//==========CONSTRUCTORS:==========

//This function is called when user selects "add student" from menu.
//Besides the interactive graphical component, 
//this function takes the relevant data 
//and adds the student to the list.
void addStudent(list<Person*>&listOfPeople){
	string nomen1;//represents firstName
	string nomen2;//represents lastName
	int numero;//represents ssNum
	double grade;//represents GPA
	
	cout<<"\n--------------\n"
	<<"STUDENT ENTRY:\n--------------\n"
	<<"\nEnter first name: ";
	cin>>nomen1;
	cout<<"Enter last name: ";
	cin>>nomen2;
	cout<<"Enter Social Security Number: ";
	cin>>numero;
	cout<<"Enter student's GPA: ";
	cin>>grade;
	
	listOfPeople.push_back(new Student(nomen1, nomen2, numero, grade));
	
	cout<<"\nStudent "<<nomen1<<" "<<nomen2<<" added.\n"<<endl;	
}//end of addStudent

//This function is called when user selects "add employee" from menu.
//Besides the interactive graphical component, 
//this function takes the relevant data 
//and adds the employee to the list.
void addEmployee(list<Person*>&listOfPeople){
	string nomen1;//represents firstName
	string nomen2;//represents lastName
	int numero;//represents ssNum
	double amt;//represents salary
	
	cout<<"\n---------------\nEMPLOYEE ENTRY:\n---------------\n"
	<<"\nEnter first name: ";
	cin>>nomen1;
	cout<<"Enter last name: ";
	cin>>nomen2;
	cout<<"Enter Social Security Number: ";
	cin>>numero;
	cout<<"Enter employee's salary: ";
	cin>>amt;
	
	listOfPeople.push_back(new Employee(nomen1, nomen2, numero, amt));
	
	cout<<"\nEmployee "<<nomen1<<" "<<nomen2<<" added.\n"<<endl;	
}//end of addEmployee

//This function is called when user selects "add a student employee" from menu.
//Besides the interactive graphical component, 
//this function takes the relevant data 
//and adds the student-employee to the list.
void addStudentEmployee(list<Person*>&listOfPeople){
	string nomen1;//represents firstName
	string nomen2;//represents lastName
	int numero;//represents ssNum
	double grade;//represents GPA
	double amt;//represents salary
	
	cout<<"\n-----------------------\n"
	<<"STUDENT-EMPLOYEE ENTRY:\n-----------------------\n"
	<<"\nEnter first name: ";
	cin>>nomen1;
	cout<<"Enter last name: ";
	cin>>nomen2;
	cout<<"Enter Social Security Number: ";
	cin>>numero;
	cout<<"Enter student-employee's GPA: ";
	cin>>grade;
	cout<<"Enter student-employee's salary: ";
	cin>>amt;
	
	listOfPeople.push_back(new StudentEmployee(nomen1, nomen2, numero, grade, amt));
	
	cout<<"\nStudent-Employee "<<nomen1<<" "<<nomen2<<" added.\n"<<endl;	
}//end of addStudentEmployee

//This function is called when user selects "remove a person" from menu.
//Besides the interactive graphical component, 
//this function takes the input data (a last name)
//and removes the relevant person from the list.
void removePerson(list<Person*>&listOfPeople){
	
	string nomen1;//referring to firstName
	string nomen2;//referring to lastName
	bool foundPerson = false;//used at end to verify loop found person
	//nomen1 is technically used more as a placeholder for later use.
	
	cout<<"\n---------------\nPERSON REMOVAL:\n---------------\n"
	<<"\nPerson's last name: ";
	cin>>nomen2;
	
	//searches the list for relevant person and erases them.
	list< Person * >::iterator i;
	for (i = listOfPeople.begin(); i != listOfPeople.end(); ++i){
		if ((**i).getLastName() == nomen2) {
			foundPerson = true;
			nomen1=(**i).getFirstName();
			listOfPeople.erase(i);
			--i;
		}
	}
	if(foundPerson){
	cout<<nomen2<<", "<<nomen1<<" removed from list.\n"<<endl;}
	else{cout<<"No one with name ''"<<nomen2<<"'' found in list.\n"<<endl;}
}// end of removePerson

//This function is called when user selects "print out ..." from menu.
//It prints the entire list of people, including all of their data.
void printList(list<Person*>&listOfPeople){
	
	cout<<"\n------------------------\n"
	<<"COMPLETE LIST OF PEOPLE:\n------------------------\n"
	<<endl;

	list<Person*>::iterator i;
	//loop runs through list, printing releant information
  	for (i = listOfPeople.begin();
  		 i != listOfPeople.end(); 
  		 ++i){
  		(**i).printPerson();
  		cout<<endl;
  	}
}// end of printList

//This function is called when user selects "remove a person" from menu.
//Besides the interactive graphical component, 
//this function takes the input data (a last name)
//and removes the relevant person from the list.
void giveRaise(list< Person * >&listOfPeople){
	double raise = 0.0;
	
	cout<<"\n---------------\nEMPLOYEE RAISE:\n---------------\n"
	//It will be  easiest for us to work with decimals later on.
	//User is requested to express percentages in decimal form below.
	//It's important to note zero-point-n form, because
	//point-n form can break the program.
	<<"\nRaise percent (do not use % character): ";
	cin>>raise;

	//Though warning was given, user may have written it out anyway.
	if (raise>1) raise /= 100; //this should catch it just in case.

	//This loop runs through the list and applies the raise to all employees.
	list<Person*>::iterator i;
	for (i = listOfPeople.begin(); i != listOfPeople.end(); ++i){
		//placehoder employee (for a specific employee in list)
		Employee *staffer = dynamic_cast <Employee*>(*i);
		if (staffer != 0){
			staffer->setSalary(staffer->getSalary() * (1 + raise));
			}
	}
	cout<<"\nRaise of "<<(raise*100)<<"% successfully applied to all employees.\n"
	<<endl;
}// end of giveRaise



//==========MAIN FUNCTION==========
//(begins program execution)
int main(){
	//First we create the aforementioned list:
	list<Person*>listOfPeople;
	//We'll need this later. 
		
	//Next, we begin to create the graphical menu to this application:
	cout
	<<"\n======================================\n"
	<<"WELCOME TO THE VASSAR COLLEGE DATABASE"
	<<"\n======================================\n"
	<<endl;
	
	//Now we'll create the physical menu itself:
	int counter = 0;
	while (counter != 7){ //We begin a loop in which we create the graphical window.
		cout<<"---------\nMAIN MENU\n---------\n"
		<<"1. Add a student\n"
		<<"2. Add an employee\n"
		<<"3. Add a student-employee\n"
		<<"4. Remove a person (by last name)\n"
		<<"5. Print out all the information for all people in the list.\n"
		<<"6. Give the employees a raise.\n"
		<<"7. Quit\n"
		<<"\nPlease choose an option.\n";
		cin >> counter;
	
		switch (counter){
			case 1:
				addStudent(listOfPeople);
				break;

			case 2:
				addEmployee(listOfPeople);
				break;
			
			case 3:
				addStudentEmployee(listOfPeople);
				break;
			
			case 4:
				removePerson(listOfPeople);
				break;
			
			case 5:
				printList(listOfPeople);
				break;
			
			case 6:
				giveRaise(listOfPeople);
				break;
		}
	}
} // END OF MAIN FUNCTION
