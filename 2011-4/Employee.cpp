#include <iostream>
#include "Employee.h"
#include "Client.h"

using namespace std;

Employee::Employee(int earned):earned(earned){}

void Employee::worksFor(Client& client, int hours){
	int hourlyRate = rate();
	int amount = hours*hourlyRate;
	cout << client << "Now is paying " << amount << " for " << hours << " hours work\n";
	
	earned += amount;
	client.pay(amount);
}

int Employee::bonus(){return 0.1*earned;}