#Patrick Mauro, cs203 Final Project
#Person.make
#makefile

CollegeDatabase: CollegeDatabase.o Person.o Student.o Employee.o StudentEmployee.o
	g++ -o CollegeDatabase Person.o Student.o Employee.o StudentEmployee.o CollegeDatabase.o

CollegeDatabase.o: CollegeDatabase.cpp Person.h Student.h Employee.h StudentEmployee.h
	g++ -c CollegeDatabase.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

StudentEmployee.o: StudentEmployee.cpp StudentEmployee.h
	g++ -c StudentEmployee.cpp

clean:
	rm*.o CollegeDatabase

#End of Make file