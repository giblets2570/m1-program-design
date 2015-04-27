#ifndef SOLICITOR_H
#define SOLICITOR_H

#include <iostream>
#include "Employee.h"

class Solicitor: public Employee{
private:
	static int setRate;
public:
	Solicitor();
	static void setTheRate(int newRate);
	int rate() const;
};

#endif