#pragma once
#include <string>
using namespace std;

//Bidirectional association between applications and employer
class Applications{
private:
	int applicationID;
	string SubmissionDate;

public:
	Applications();
	Applications(int appID, string subDate);
	void validateApplicationDetails();
	void makeNewApplications();
	void sendApplications();
	~Applications();
};