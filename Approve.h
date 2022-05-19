//Bidirectional association between applications and employer
#pragma once
#include "Employer.h"
//Unidirectional association between employer and moderator
class Approve

{
private:
	bool approvalStatus;
	Employer* emp1;
public:
	Approve();
	Approve(bool appStatus);
	void approveAccount();
	~Approve();

};