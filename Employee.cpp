#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

// Definition of Employee class functions
// Has a default constructor to set data members to zero or blank
// An Overloaded constructor to set data members to passed values
// Setter functions to manipulate the individual members
// Getter functions to return individual member data
// getData function to display all the member data
// showStaticBinding function to demostrate redifined functions
// showValues function to demostrate polymorhism

// Default constructor
Employee::Employee()
{
	name = "";
	numberID = 0;
	hireDate = "";
}

// Overloaded constructor
Employee::Employee(string n, int id, string date)
{
	name = n;
	numberID = id;
	hireDate = date;
}


// Setter function to set employee's name
void Employee::setName(string n)
{
	name = n;
}

// Setter function to set employee's ID
void Employee::setID(int id)
{
	numberID = id;
}

// Setter function to set employee's hiring date
void Employee::setHireDate(string date)
{
	hireDate = date;
}

// Getter function to return employee's name
string Employee::getName()
{
	return name;
}

// Getter function to return employee's ID
int Employee::getID()
{
	return numberID;
}

// Getter function to return employee's hiring date
string Employee::getHireDate()
{
	return hireDate;
}

int Employee::getData()
{
	cout << "Name:  " << getName() << endl;
	cout << "ID:    " << getID() << endl;
	cout << "Hired: " << getHireDate() << endl;
	return 0;
}

// static binding fuction
void Employee::showStaticBinding()
{
	cout << "showStaticBinding() function of the Employee Class ...\n";
	cout << "This function demostrates a redefined function \n";
	cout << "This is the base class message \n";
}

// Definition for virtual function to dynamically display all the values of the object
void Employee::showValues()
{
	cout << "Employee class showValues() virtual function: " << endl;
	getData();
}
