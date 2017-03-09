// CIS22b
// Lab 03
// Name:

/*
Program Description: This program stores data for different types of employees.
Values can be set during instatiation, modified individualy, accessed and displayed.

Pseudocode:
Objects of the class Employee, ProductionWorker, ShiftSupervisor 
and TeamLeader can have their values set during instatiation.
Individual setter functions can be used to set values individually 
or modify specific values of the classes' member variables.
Functions are redefined among the classes and can be called 
directly by each class instance.
A polymorphic function displays information from instances of all
the casses, which is called dinamically through a pointer
of the desired instance.
Output of the getter functions is displayed on the console
*/
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

#include <iostream>
#include <string>
using namespace std;

//Function prototype
void displayInfo(Employee *);


int main()
{
	// Creating objects and initializing their values

	Employee man0("John Smith", 1234, "March, 2004");
	ProductionWorker man1("Peter Pan", 456, "August, 2005", 2, 12.75);
	ShiftSupervisor man2("Mary Sue", 789, "May, 2006", 100000.0, 2000.0);
	TeamLeader man3("Paul Bunyan", 160, "October, 2008", 1, 15.55, 50.0, 5, 25);


	// Calling redefined functions / static binding
	cout << "Demostrating redefined fuctions with showStaticBinding() function ... \n\n";
	man0.showStaticBinding();
	cout << endl;
	man1.showStaticBinding();
	cout << endl;
	man2.showStaticBinding();
	cout << endl;
	man3.showStaticBinding();
	


	//  clifford - this is needed, so say-eth the teacher
	// Fabi - thanks for taking the time to ask him :)
	Employee *empClassPtr = &man0;
	Employee *workerClassPtr = &man1;
	Employee *ShiftSupervisorClassPtr = &man2;
	Employee *TeamLeaderClassPtr = &man3;

	// Calling overriden functions / dynamic binding
	cout << endl;
	cout << endl;
	cout << "Demostrating polymorphism with displayInfo() function ...\n\n";
	displayInfo(empClassPtr);
	cout << endl;
	displayInfo(workerClassPtr);
	cout << endl;
	displayInfo(ShiftSupervisorClassPtr);
	cout << endl;
	
	displayInfo(TeamLeaderClassPtr);
	cout << endl;


	system("pause");
	return 0;
}



// Polymorphic function to display employee information:
// Receives a pointer to an object from any of the defined classes
// Calls the virtual function defined in the base class
// Displays all the current set values of the passed object
void displayInfo(Employee *employeeClassPtr)
{
	employeeClassPtr->showValues();
}
