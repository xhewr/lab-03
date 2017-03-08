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
void displayInfo(Employee &);



int main()
{
	// Creating objects and initializing their values

	Employee man0("john smith", 1234, "may 3");
	ProductionWorker man1("Peter", 456, "August", 2, 12.0);
	ShiftSupervisor man2("Mary", 789, "May", 100000.0, 2000.0);
	TeamLeader man3("Paul", 160, "October", 1, 12, 50.0, 20, 5);


	// Calling redefined functions / static binding
	cout << "demostrating redefined fuctions with setInfo function ... \n\n";
	man0.setInfo("James Jones", 789, "April 4");
	cout << endl;
	man1.setInfo("James Jones", 789, "April 4");
	//cout << "Results: " << endl;
	//cout << "\nProduction Worker \n" << man1.getData() << endl;
	//cout << "\nShift Supervisor \n" << man2.getData() << endl;
	//cout << "\nTeam Leader \n" << man3.getData() << endl;

	// Calling overriden functions / dynamic binding
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "demostrating virtual functions with displayInfo() function ...\n\n";
	displayInfo(man0);
	cout << endl;
	//cout << "\nVirtual: \n" << displayInfo(man1);
	displayInfo(man1);
	//cout << "\nVirtual: \n" << displayInfo(man2);
	//cout << "\nVirtual: \n" << displayInfo(man3);

	cin.get();
	return 0;


}



// Polymorphic function
// Receives an object fro any of the defined classes as a reference
// Calls the virtual function defined in the base class
// Displays all the current set values of the passed object
void displayInfo(Employee &refEmployeeObject)
{
	refEmployeeObject.showValues();
	//return 0;
}