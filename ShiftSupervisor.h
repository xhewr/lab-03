
#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "EMPLOYEE.H"
#include <iostream>
#include <string>
using namespace std;



//ShiftSupervisor derived class, inheriting from Employee base class:

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
    
    // Constructor overload 1, calling Employee base class constructor overload 1
    ShiftSupervisor(string n, int ID, string date) : Employee(n, ID, date){}
    
    // Constructor overload 2, calling Employee base class constructor overload 1 + new attributes
    ShiftSupervisor(string n,  int id, string date, double sy, double by) : Employee (n,  id, date)
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

    // Redefined function from base class to display obeject's values (virtual)
    void showValues() override;
    
    
};

#endif 
