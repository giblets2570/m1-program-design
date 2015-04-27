#ifndef RAID1_H
#define RAID1_H

#include "Storage.h"
#include <iostream>

class RAID1: public Storage{

public:
	double getBandwidth();
	double getCapacity();
	RAID1();
	~RAID1();
};

#endif