#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Client.h"

class Employee{
protected:
	int earned;
public:
	Employee(int earned);
	virtual int rate() const = 0;
	void worksFor(Client& client, int hours);
	int bonus();
};

#endif