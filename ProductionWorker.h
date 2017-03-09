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
	//ProductionWorker(string n, int ID, string date) : Employee(n, ID, date) {}  // clifford - this is not needed in my opinion.  we don't need two overloaded constructors.
																				  //  plus this function isn't used in the program

	// overloaded constructor, calling Employee base class constructor and adding two new data members
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

	// Redefined function from base class (virtual)
	virtual void showValues();  //  clifford - I removed the overide here for testing.  If you want you can add it back in, but the program works with out override
};

#endif 