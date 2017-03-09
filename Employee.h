#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;


// Employee base class:
// Has a default constructor to set data members to zero or blank
// An Overloaded constructor to set data members to passed values
// Setter functions to manipulate the individual members
// Getter functions to return individual member data
// getDate function to display all the member data
// showValues function to demostrate polymorhism

class Employee
{
protected:
	string name;        // Employee's namee
	int numberID;       // Employee's ID
	string hireDate;    // Date employee was hired

public:
	// Default constructor
	Employee();

	// Overloaded constructor
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
