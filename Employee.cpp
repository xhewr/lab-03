


#include "EMPLOYEE.H"
#include <iostream>
#include <string>
using namespace std;

//Definition of Employee class functions

// Default constructor
Employee::Employee()
{
    name = "";
    numberID = 0;
    hireDate = "";
}

// Constructor
Employee::Employee(string n, int id, string date)
{
    name = n;
    numberID = id;
    hireDate = date;
}


// Setter function to set employee's name
void Employee::setName (string n)
{
    name = n;
}

// Setter function to set employee's ID
void Employee::setID(int id)
{
    numberID = id;
}

// Setter function to set employee's hiring date
void Employee::setHireDate(string date)
{
    hireDate = date;
}

// Getter function to return employee's name
string Employee::getName()
{
    return name;
}

// Getter function to return employee's ID
int Employee::getID()
{
    return numberID;
}

// Getter function to return employee's hiring date
string Employee::getHireDate()
{
    return hireDate;
}

int Employee::getData()
{
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Hired: " << getHireDate() << endl;
    return 0;
}


// Definition for virtual function to dinamically display all the values of the object
void Employee::showValues()
{
    getData();
}

