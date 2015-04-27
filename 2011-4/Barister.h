#ifndef BARISTER_H
#define BARISTER_H

#include <iostream>
#include "Employee.h"

class Barister: public Employee{
private:
	int grade;
public:
	Barister(int grade);
	int rate() const;
	void passExam();
};

#endif