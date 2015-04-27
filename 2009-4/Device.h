#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>

class Device{
protected:
	int capacity, bandwidth;
public:
	Device(int capacity, int bandwidth);
	virtual double getLatency() = 0;
	int getCapacity();
	int getBandwidth();
	virtual ~Device();
};

#endif