#include "TeamLeader.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Definition of TeamLeader class functions
// showStaticBinding() function redefines the ProductionWorker class showStaticBinding() and displays a new message
// showValues function overrides the base class showVaules() function when used with a polymorphic call

// Setter function to set employee's monthly bonus
void TeamLeader::setBonusMonth(double bm)
{
	bonusMonth = bm;
}

// Setter function to set employee's required training hours
void TeamLeader::setRequiredTrainingHrs(int rh)
{
	requiredTrainingHrs = rh;
}

// Setter function to set employee's attended training hours
void TeamLeader::setAttendedTrainingHrs(int ah)
{
	attendedTrainingHrs = ah;
}

// Getter function to display employee's monthly bonus
double TeamLeader::getBonusMonth()
{
	return bonusMonth;
}

// Getter function to display employee's required training hours
int TeamLeader::getRequiredTrainingHrs()
{
	return requiredTrainingHrs;
}

// Getter function to display employee's attended training hours
int TeamLeader::getAttendedTrainingHrs()
{
	return attendedTrainingHrs;
}

int TeamLeader::getData()
{
	ProductionWorker::getData();
	cout << "Monthly bonus:   $" << fixed << showpoint << setprecision(2) << getBonusMonth() << endl;
	cout << "Required training hours: " << getRequiredTrainingHrs() << endl;
	cout << "Attended training hours: " << getAttendedTrainingHrs() << endl;
	return 0;
}


void TeamLeader::showStaticBinding()
{
	cout << "showStaticBinding() function of the TeamLeader Class ...\n";
	cout << "This function demostrates a redefined function \n";
	cout << "This is the TeamLeader class message \n";
}


// This function will override the base class showValues() function when called using dynamic binding
void TeamLeader::showValues()
{
	cout << "TeamLeader class showValues() virtual function: " << endl;
	getData();
}
