#include <iostream>
#include "Client.h"
#include "Barister.h"
#include "Solicitor.h"
#include "Employee.h"

using namespace std;

int main(){
	Solicitor FS;
	Barister NM(2);
	Client PM("Paul"), PA("Price");
	FS.worksFor(PM,10);
	Solicitor::setTheRate(175);
	FS.worksFor(PA,5);
	NM.worksFor(PM,10);
	cout << PM << PA << endl;
	NM.passExam();
	PM.getOwes();
	FS.bonus();
}