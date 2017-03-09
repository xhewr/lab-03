#include "ShiftSupervisor.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Definition of ShiftSupervisor class functions

// Setter function to set employee's yearly salary
void ShiftSupervisor::setSalaryYear(double sy)
{
	salaryYear = sy;
}

// Setter function to set employee's yearly bonus
void ShiftSupervisor::setBonusYear(double by)
{
	bonusYear = by;
}

// Getter function to display employee's yearly salary
double ShiftSupervisor::getSalaryYear()
{
	return salaryYear;
}

// Getter function to display employee's yearly bonus
double ShiftSupervisor::getBonusYear()
{
	return bonusYear;
}


int ShiftSupervisor::getData()
{
	Employee::getData();
	cout << "Annual Salary: $" << fixed << showpoint << setprecision(2) << getSalaryYear() << endl;
	cout << "Annual Bonus:  $" << fixed << showpoint << setprecision(2) <<  getBonusYear() << endl;
	return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void ShiftSupervisor::showStaticBinding()
{
	cout << "showStaticBinding() function of the ShiftSupervisor Class ...\n";
	cout << "This function demostrates a redefined function \n";
	cout << "This is the ShiftSupervisor class message \n";
}


// Redefined base function to dinamically display all the values of the object (virtual)
void ShiftSupervisor::showValues()
{
	cout << "ShiftSupervisor class showValues() virtual function: " << endl;
	getData();
	
}
