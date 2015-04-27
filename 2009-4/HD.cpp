#include "HD.h"
#include "Device.h"

HD::HD(int capacity, int bandwidth, int rotationTime, int seekTime):Device(capacity,bandwidth),rotationTime(rotationTime),seekTime(seekTime){}

double HD::getLatency(){
	return rotationTime+seekTime;
}
