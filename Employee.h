

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;




//Employee base class:

class Employee
{
protected:
    string name;        // Employee's namee
    int numberID;       // Employee's ID
    string hireDate;    // Date employee was hired
    
public:
    // Default constructor
    Employee();
    
    // Constructor overload 1
    Employee(string n, int id, string date);
    
    // Setter functions
    void setName (string n);
    void setID(int id);
    void setHireDate(string date);
    
    // Getter functions
    string getName();
    int getID();
    string getHireDate();
    int getData();
    
    // Declaring function virtual: redefined versions will become virtual
    virtual void showValues();
    

    
    
};
#endif
