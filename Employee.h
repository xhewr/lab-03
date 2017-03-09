#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;


//Employee base class:

class Employee
{
protected:
	string name;        // Employee's namee
	int numberID;       // Employee's ID
	string hireDate;    // Date employee was hired

public:
	// Default constructor
	Employee();

	// overloaded constructor
	Employee(string, int, string);

	// Setter functions
	void setName(string);
	void setID(int);
	void setHireDate(string);
	void showStaticBinding();

	// Getter functions
	string getName();
	int getID();
	string getHireDate();
	int getData();

	// Declaring function virtual: redefined versions will become virtual
	virtual void showValues();

};
#endif