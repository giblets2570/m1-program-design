#include <iostream>
#include "RAID1.h"
#include "RAID5.h"
#include "HD.h"
#include "SSD.h"

using namespace std;

int main(){
	RAID1 r1;
	for(int i = 0; i < 4; i++){
		cout << "Adding devices to r1" << endl;
		HD* h = new HD(500,8,4,100);
		r1.addDevice(h);
	}

	RAID5 r5;
	for(int i = 0; i < 4; i++){
		cout << "Adding devices to r5" << endl;
		SSD* s = new SSD(30,300,0.01);
		r5.addDevice(s);
	}

	cout << "Bandwidth of r1: " << r1.getBandwidth() << endl;;

	cout << "Capacity of r5: " << r5.getCapacity() << endl;;

}
