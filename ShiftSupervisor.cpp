

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
    Employee:: getData();
    cout << "Salary year: " << getSalaryYear() << endl;
    cout << "Bonus year: " << getBonusYear() << endl;
    return 0;
}

// Redefined base function to dinamically display all the values of the object (virtual)
void ShiftSupervisor::showValues()
{
    getData();
}
