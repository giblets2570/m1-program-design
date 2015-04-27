#ifndef RAID5_H
#define RAID5_H

#include "Storage.h"
#include <iostream>

class RAID5: public Storage{

public:
	double getBandwidth();
	double getCapacity();
	RAID5();
	~RAID5();
};

#endif