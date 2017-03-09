#include "ProductionWorker.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Definition of ProductionWorker class functions
// showStaticBinding() function redefines the base class showStaticBinding() and displays a new message
// showValues function overrides the base class showVaules() function when used with a polymorphic call

// Setter function to set employee's shift
void ProductionWorker::setShift(int s)
{
	shift = s;
}

// Setter function to set employee's hourly pay
void ProductionWorker::setHourPayRate(double r)
{
	hourPayRate = r;
}

// Getter function to return employee's shift
int ProductionWorker::getShift()
{
	return shift;
}

// Getter function to return employee's hourly pay
double ProductionWorker::getHourPayRate()
{
	return hourPayRate;
}

int ProductionWorker::getData()
{
	Employee::getData();       // display attributes defined in the base class
	cout << "Shift: " << getShift() << endl;
	cout << "Hourly Pay rate: $" << fixed << showpoint << setprecision(2) << getHourPayRate() << endl;
	return 0;
}

void ProductionWorker::showStaticBinding()
{
	cout << "showStaticBinding() function of the ProductionWorker Class ...\n";
	cout << "This function demostrates a redefined function \n";
	cout << "This is the ProductionWorker class message \n";
}

// This function will override the base class showValues() function when called using dynamic binding
void ProductionWorker::showValues()
{
	cout << "ProductionWorker class showValues() virtual function: " << endl;
	getData();


}
