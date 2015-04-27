#include "RAID1.h"
#include <iostream>

using namespace std;

RAID1::RAID1():Storage(12,0){}

double RAID1::getCapacity(){
	double sum = 0;
	for(int i = 0; i < current; i++){
		cout << devices[i]->getCapacity() << endl;
		sum += devices[i]->getCapacity();
	}
	sum /= 2;
	return sum;
}

double RAID1::getBandwidth(){
	double sum = 0;
	for(int i = 0; i < current; i++){
		sum += devices[i]->getBandwidth();
	}
	sum /= 2;
	return sum;
}

RAID1::~RAID1(){}