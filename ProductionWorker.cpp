
#include "PRODUCTIONWORKER.H"
#include <iostream>
#include <string>
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
    cout << "Hour rate: " << getHourPayRate() << endl;
    return 0;
}


// Redefined function from base class to display the object's values (virtual)
void ProductionWorker::showValues()
{
    getData();
}
