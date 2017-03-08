
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

#include <iostream>
#include <string>
using namespace std;

//Function prototype
int displayInfo(Employee &x);



int main()
{
    // Creating objects and initializing their values

    ProductionWorker man1 ("Peter", 456, "August", 2, 12.0);
    ShiftSupervisor man2 ("Mary", 789, "May", 100000.0, 2000.0);
    TeamLeader man3("Paul", 160, "October", 1, 12, 50.0, 20, 5);
    
    
    // Calling redefined functions / static binding
    cout << "Results: " << endl;
    cout << "\nProduction Worker \n" << man1.getData() << endl;
    cout << "\nShift Supervisor \n" << man2.getData() << endl;
    cout << "\nTeam Leader \n" << man3.getData() << endl;
    
    // Calling overriden functions / dynamic binding
    cout << "\nVirtual: \n" << displayInfo(man1);
    cout << "\nVirtual: \n" << displayInfo(man2);
    cout << "\nVirtual: \n" << displayInfo(man3);
    
            
    
}



// Polymorphic function
// Receives an object fro any of the defined classes as a reference
// Calls the virtual function defined in the base class
// Displays all the current set values of the passed object
int displayInfo(Employee &x)
{
    x.showValues();
    return 0;
}
               






