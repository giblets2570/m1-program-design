#ifndef HD_H
#define HD_H

#include <iostream>
#include "Device.h"

class HD: public Device{
private:
	int rotationTime, seekTime;
public:
	double getLatency();
	HD(int capacity, int bandwidth, int rotationTime, int seekTime);
};

#endif