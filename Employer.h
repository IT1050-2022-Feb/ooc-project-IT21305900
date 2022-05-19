#pragma once
#include "User.h"
#include "Payment.h"
#include<string>
using namespace std;

//Inheritance relationship between User and Employer classes
//DEpendancy relationship between Job seeker and employer
//Unidirectional association between employer and vacancy
//Unidirectional association between employer and moderator
class Employer:public User{
private:
	string employerId;
	string companyName;

public:
	Employer();
	Employer(string empID, string cName, string uName, string mail, string pWord);
	void makePayment(Payment *pay1); //Dependancy between payment and employer
	void receiveApplications();
	void contactApplicants();
	~Employer();
};

