#include "PRODUCTIONWORKER.H"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Definition of ProductionWorker class functions

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


///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void ProductionWorker::showStaticBinding()
{
	cout << "showStaticBinding() function of the ProductionWorker Class ...\n";
	cout << "This function demostrates a redefined function \n";
	cout << "This is the ProductionWorker class message \n";
}


// Redefined function from base class to display the object's values (virtual)
void ProductionWorker::showValues()
{
	cout << "ProductionWorker class showValues() virtual function: " << endl;
	getData();
	

}
