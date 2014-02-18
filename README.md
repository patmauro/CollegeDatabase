CollegeDatabase
===============
Final project for Software Design and Implementation
 
From the instructions:
~~~~~~~~~~~~~~~~~~~~~~

The College Database Hierarchy:
-Person - (base class) that has a constructor, and data members firstName, lastName, and social security number. Create set and get functions for the data members, and a print function.
-Student class derived from Person, which adds a GPA data member. Create the necessary new and/or virtual member functions for the Student class.
-Employee class derived from Person, which adds a salary field, along with the necessary new and/or virtual member functions.
-StudentEmployee class that inherits from both Student and Employee. Create the necessary member functions so that StudentEmployee behaves correctly.
-Note: constructors should require the parameters needed to create objects that are fully initialized.
The Application:
 ▪ Allow the user to enter a set of students, employees, and/or student-
   employees which will be placed into an STL list.	
 ▪ The user should be able to remove a person from the list by last name.
 ▪ Use the STL list class to hold pointers to people. Remember that using 
   the ‘new’ operation to create a person returns a pointer to the object.
 ▪ Use a base class pointer and an iterator to iterate through the list for 
   the remove, print, and employeeRaise functions.
 ▪ Using the downcasting method (see the payroll case study in the text, 
   section 13.8, pg 616) iterate through the list to increase the salaries 
   of Employees by some percent.
 ▪ Your program will consist of a number of classes and an application 
   file. Please use a makefile.
▪The application file should print a menu for the user that looks something like:
  1) Add a Student
  2) Add an Employee
  3) Add a Student-Employee
  4) Remove a person (by last name)
  5) Print out all the information for all people in the list.
  6) Give the employees a raise.
  7) Quit
  
  Enter a number(1 .. 7): 
