#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "EMPLOYEE.H"
#include <iostream>
#include <string>
using namespace std;


// Production Worker derived class, inheriting from Employee base class:
// Inherits Employee data and member functions and has two extra data member for shift and pay rate
// showStaticBinding() function redefines the base class showStaticBinding() and displays a new message
// showValues function overrides the base class showVaules() function when used with a polymorphic call


class ProductionWorker : public Employee
{
protected:
	int shift;             // Employee's shift type: day shift = 1, night shift = 2
	double hourPayRate;    // Employee's hourly pay

public:

	// Default constructor, calling Employee base class default constructor
	ProductionWorker() : Employee()
	{
		shift = 0;
		hourPayRate = 0.0;
	}


	// Overloaded constructor, calling Employee base class's overloaded constructor and adding two new data members
	ProductionWorker(string n, int ID, string date, int s, double r) : Employee(n, ID, date)
	{
		shift = s;
		hourPayRate = r;
	}

	// Setter functions
	void setShift(int s);
	void setHourPayRate(double r);
	void showStaticBinding();

	// Getter functions
	int getShift();
	double getHourPayRate();
	int getData();

	// This function will override the base class showValues() function
	virtual void showValues() override; 
};

#endif 
