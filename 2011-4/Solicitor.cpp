#include <iostream>
#include "Employee.h"
#include "Solicitor.h"

using namespace std;

int Solicitor::setRate = 150;

Solicitor::Solicitor():Employee(0){}

int Solicitor::rate() const{
	return setRate;
}

void Solicitor::setTheRate(int newRate){
	cout << "New solicitor rate set to " << newRate << endl;
	setRate = newRate;
}