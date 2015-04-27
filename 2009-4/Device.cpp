#include "Device.h"

Device::Device(int capacity, int bandwidth):capacity(capacity),bandwidth(bandwidth){}

int Device::getCapacity(){
	return capacity;
}

int Device::getBandwidth(){
	return bandwidth;
}

Device::~Device(){}