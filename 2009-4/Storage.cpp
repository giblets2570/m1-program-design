#include "Storage.h"
#include <iostream>

double Storage::getLatency() const{
	double max = 0;
	for(int i = 0; i < current; i++){
		double lat = devices[i]->getLatency();
		if(lat > max){
			max = lat;
		}
	}
	return max;
}
void Storage::addDevice(Device* newDevice){
	if(current < max){
		devices[current] = newDevice;
		current++;
	}
}

Storage::Storage(int max, int current):max(max),current(current){
	devices = new Device*[max];
}

Storage::~Storage(){
	for(int i = 0; i < current; i++){
		delete devices[i];
	}
	delete [] devices;
}