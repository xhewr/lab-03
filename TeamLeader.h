

#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "PRODUCTIONWORKER.H"
#include <iostream>
#include <string>
using namespace std;

//TeamLeader derived class, inheriting from ProductionWorker class:

class TeamLeader : public ProductionWorker
{
protected:
    double bonusMonth;        // Employee's monthly bonus
    int requiredTrainingHrs;  // Employee's required training hours
    int attendedTrainingHrs;  // Employee's attended training hours
    
public:
    
    // Default constructor, calling ProductionWorker default constructor
    TeamLeader() : ProductionWorker()
    {
        bonusMonth = 0.0;
        requiredTrainingHrs = 0;
        attendedTrainingHrs = 0;
    }
    
    // Constructor overload 1, calling ProductionWorker constructor overload 1
    TeamLeader(string n, int ID, string date) : ProductionWorker(n, ID, date){}
    
    // Constructor overload 2, calling ProductionWorker constructor overload 2 + new attributes
    TeamLeader (string n, int ID, string date, int s, double r, double bm, int rh, int ah) : ProductionWorker (n, ID, date, s, r)
    {
        bonusMonth = bm;
        requiredTrainingHrs = rh;
        attendedTrainingHrs = ah;
    }
    
    
    // Setter functions
    void setBonusMonth(double bm);
    void setRequiredTrainingHrs(int rh);
    void setAttendedTrainingHrs(int ah);
    
    // Getter functions
    double getBonusMonth();
    int getRequiredTrainingHrs();
    int getAttendedTrainingHrs();
    int getData();  
    
    
    // Redefined function from base class to display object's values (virtual)
    void showValues() override;
    
    
};


#endif 
