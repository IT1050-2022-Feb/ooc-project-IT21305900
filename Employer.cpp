#include "Employer.h"
#include "Payment.h"
#include <iostream>


Employer::Employer():User() {
	//Default constructor
	employerId = ""; // overloaded constructor
	companyName = "";
	username = "";
	email = "";
	password = "";
}

Employer::Employer(string empID, string cName, string uName, string mail, string pWord) :User(uName, mail, pWord) {
	employerId = empID; // overloaded constructor
	companyName = cName;
	username = uName;
	email = mail;
	password = pWord;
}

void Employer::makePayment(Payment *pay1) {

}


void Employer::receiveApplications() {

}

void Employer::contactApplicants() {

}

Employer::~Employer() {
	cout << "Employer Destroyed"<<endl;
	//Default destructor
}