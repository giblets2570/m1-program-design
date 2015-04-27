life: SSD.o HD.o Device.o RAID1.o RAID5.o Storage.o main.o
	g++ -Wall -g SSD.o HD.o Device.o RAID1.o RAID5.o Storage.o main.o -o life

main.o: main.cpp Storage.h Device.h
	g++ -Wall -g -c main.cpp 

SSD.o: SSD.cpp SSD.h Device.h
	g++ -Wall -g -c SSD.cpp

HD.o: HD.cpp HD.h Device.h
	g++ -Wall -g -c HD.cpp

RAID1.o: RAID1.cpp RAID1.h Storage.h
	g++ -Wall -g -c RAID1.cpp

RAID5.o: RAID5.cpp RAID5.h Storage.h
	g++ -Wall -g -c RAID5.cpp

Device.o: Device.cpp Device.h
	g++ -Wall -g -c Device.cpp

Storage.o: Storage.cpp Storage.h
	g++ -Wall -g -c Storage.cpp

clean:
	rm -f *.o life