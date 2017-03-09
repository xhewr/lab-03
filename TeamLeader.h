#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "PRODUCTIONWORKER.H"
#include <iostream>
#include <string>
using namespace std;

// TeamLeader derived class, inheriting from ProductionWorker class:
// Inherits ProductionWorker data and member functions, which in turn inherits Employee class data and member functions
// showStaticBinding() function redefines the ProductionWorker class showStaticBinding() and displays a new message
// showValues function overrides the base class showVaules() function when used with a polymorphic call

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


	// Overloaded constructor, calling ProductionWorker's overloaded constructor and three new attributes
	TeamLeader(string n, int ID, string date, int s, double r, double bm, int rh, int ah) : ProductionWorker(n, ID, date, s, r)
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
	void showStaticBinding();

	// This function will override the base class showValues() function
	virtual void showValues() override;


};


#endif 
