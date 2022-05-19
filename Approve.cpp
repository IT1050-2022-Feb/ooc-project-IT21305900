#include "Approve.h"
#include <iostream>

using namespace std;

Approve::Approve() {
	//Default constructor
	approvalStatus = false;
}

Approve::Approve(bool appStatus) //Overloaded constructor 
{
	approvalStatus = appStatus;
}

void Approve::approveAccount()
{

}

Approve::~Approve() //default destructor
{
	cout << "Vacancy destroyed" << endl;

}