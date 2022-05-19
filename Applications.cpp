#include "Applications.h"
#include <iostream>
#include <string>
using namespace std;

Applications::Applications() // Default constructor 
{
	applicationID = 000;
	SubmissionDate = "";
}

Applications::Applications(int appID, string subDate) //Overloaded constructor
{
	applicationID = appID;
	SubmissionDate = subDate;
}

void Applications::validateApplicationDetails()
{

}


void Applications::makeNewApplications()
{

}

void Applications::sendApplications()
{

}

Applications::~Applications() //Default destructor
{
	cout << "Application destroyed" << endl;
}