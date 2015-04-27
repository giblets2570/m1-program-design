#include <iostream>
#include "Employee.h"
#include "Barister.h"

using namespace std;

Barister::Barister(int grade):Employee(0),grade(grade){}

int Barister::rate() const{
	int rate = 0;
	switch(grade){
		case 1:
			rate = 150;
			break;
		case 2:
			rate = 200;
			break;
		case 3:
			rate = 400;
			break;
		default:
			break;
	}
	return rate;
}

void Barister::passExam(){
	if(grade <  3){
		grade++;
		cout << "Passed exam! Now on grade " << grade << endl;
	}
}
