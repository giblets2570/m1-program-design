#include "SSD.h"
#include "Device.h"

SSD::SSD(int capacity, int bandwidth, double accessTime):Device(capacity,bandwidth),accessTime(accessTime){}

double SSD::getLatency(){
	return accessTime;
}
