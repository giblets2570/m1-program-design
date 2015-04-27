#include "RAID5.h"
#include <iostream>

RAID5::RAID5():Storage(12,0){}

double RAID5::getCapacity(){
	double sum = 0, factor = (current-1)/(1.0*current);
	for(int i = 0; i < current; i++){
		sum += devices[i]->getCapacity();
	}
	sum *= factor;
	return sum;
}

double RAID5::getBandwidth(){
	double sum = 0, factor = (current-1)/(1.0*current);
	for(int i = 0; i < current; i++){
		sum += devices[i]->getBandwidth();
	}
	sum *= factor;
	return sum;
}

RAID5::~RAID5(){}