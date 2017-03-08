#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "EMPLOYEE.H"
#include <iostream>
#include <string>
using namespace std;



//Production Worker derived class, inheriting from Employee base class:

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

	// Constructor overload 1, calling only Employee base class constructor overload 1
	ProductionWorker(string n, int ID, string date) : Employee(n, ID, date) {}

	// Constructor overload 2, calling Employee base class constructor overload 1 + new attributes
	ProductionWorker(string n, int ID, string date, int s, double r) : Employee(n, ID, date)
	{
		shift = s;
		hourPayRate = r;
	}

	// Setter functions
	void setShift(int s);
	void setHourPayRate(double r);
	void setInfo(string , int , string);

	// Getter functions
	int getShift();
	double getHourPayRate();
	int getData();

	// Redefined function from base class (virtual)
	virtual void showValues();
};

#endif 