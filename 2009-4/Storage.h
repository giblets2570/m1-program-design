#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>
#include "Device.h"

class Storage{
protected:
	Device** devices;
	int max, current;
public:
	Storage(int max, int current);
	double getLatency() const;
	virtual double getBandwidth() = 0;
	virtual double getCapacity() = 0;
	void addDevice(Device* newDevice);
	virtual ~Storage();
};

#endif