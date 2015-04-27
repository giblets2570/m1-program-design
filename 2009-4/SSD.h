#ifndef SSD_H
#define SSD_H

#include <iostream>
#include "Device.h"

class SSD: public Device{
private:
	double accessTime;
public:
	double getLatency();
	SSD(int capacity, int bandwidth, double accessTime);
};

#endif