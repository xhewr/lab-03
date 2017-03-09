#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "EMPLOYEE.H"
#include <iostream>
#include <string>
using namespace std;



// ShiftSupervisor derived class, inheriting from Employee base class:
// Inherits Employee data and member functions and has two extra data member for salary and bonus
// showStaticBinding() function redefines the base class showStaticBinding() and displays a new message
// showValues function overrides the base class showVaules() function when used with a polymorphic call

class ShiftSupervisor : public Employee
{
protected:
	double salaryYear;  // Employee's yearly salary
	double bonusYear;   // Employee's yearly bonus

public:

	// Default constructor, calling Employee base class default constructor
	ShiftSupervisor() : Employee()
	{
		salaryYear = 0.0;
		bonusYear = 0.0;
	}


	// Overloaded constructor, calling Employee base class's overload constructor and two new data members
	ShiftSupervisor(string n, int id, string date, double sy, double by) : Employee(n, id, date)
	{
		salaryYear = sy;
		bonusYear = by;
	}

	// Setter functions
	void setSalaryYear(double sy);
	void setBonusYear(double by);

	// Getter functions
	double getSalaryYear();
	double getBonusYear();
	int getData();
	void showStaticBinding();

	// This function will override the base class showValues() function
	virtual void showValues() override;


};

#endif 
