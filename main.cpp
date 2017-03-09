//  22b
//
//

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
	cout << "demostrating redefined fuctions with showStaticBinding() function ... \n\n";
	man0.showStaticBinding();
	cout << endl;
	man1.showStaticBinding();
	cout << endl;
	man2.showStaticBinding();
	cout << endl;
	man3.showStaticBinding();
	//cout << "Results: " << endl;
	//cout << "\nProduction Worker \n" << man1.getData() << endl;
	//cout << "\nShift Supervisor \n" << man2.getData() << endl;
	//cout << "\nTeam Leader \n" << man3.getData() << endl;


	//  clifford - this is needed, so say-eth the teacher
	Employee *empClassPtr = &man0;
	Employee *workerClassPtr = &man1;
	Employee *ShiftSupervisorClassPtr = &man2;
	Employee *TeamLeaderClassPtr = &man3;

	// Calling overriden functions / dynamic binding
	//cout << endl;
	cout << endl;
	cout << endl;
	cout << "demostrating polymorphism with displayInfo() function ...\n\n";
	displayInfo(empClassPtr);
	cout << endl;
	//cout << "\nVirtual: \n" << displayInfo(man1);
	displayInfo(workerClassPtr);
	cout << endl;
	//cout << "\nVirtual: \n" << displayInfo(man2);
	displayInfo(ShiftSupervisorClassPtr);
	cout << endl;
	//cout << "\nVirtual: \n" << displayInfo(man3);
	displayInfo(TeamLeaderClassPtr);
	cout << endl;


	cin.get();
	return 0;
}



// Polymorphic function
// Receives an object fro any of the defined classes as a reference
// Calls the virtual function defined in the base class
// Displays all the current set values of the passed object
void displayInfo(Employee *employeeClassPtr)
{
	employeeClassPtr->showValues();
	//return 0;
}