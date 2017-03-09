#include "SHIFTSUPERVISOR.H"
#include <iostream>
#include <string>
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
	cout << "Annual Salary: " << getSalaryYear() << endl;
	cout << "Annual Bonus: " << getBonusYear() << endl;
	return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void ShiftSupervisor::showStaticBinding()
{
	cout << "showStaticBinding() function of the ShiftSupervisor Class ...\n";
	cout << "this function demostrates a redefined function \n";
	cout << "this is the ShiftSupervisor class message \n";
}


// Redefined base function to dinamically display all the values of the object (virtual)
void ShiftSupervisor::showValues()
{
	cout << "ShiftSupervisor class showValues() virtual function: " << endl;
	Employee::getData();
	cout << "Annual Salary: " << getSalaryYear() << endl;
	cout << "Annual Bonus: " << getBonusYear() << endl;
}