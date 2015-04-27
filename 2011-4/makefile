work: main.o Barister.o Solicitor.o Client.o Employee.o
	g++ -Wall -g Barister.o Solicitor.o Client.o Employee.o main.o -o work

main.o: main.cpp Barister.h Solicitor.h Client.h
	g++ -Wall -g -c main.cpp

Client.o: Client.cpp Client.h Employee.h
	g++ -Wall -g -c Client.cpp

Solicitor.o: Solicitor.cpp Solicitor.h Employee.h
	g++ -Wall -g -c Solicitor.cpp

Barister.o: Barister.cpp Barister.h Employee.h
	g++ -Wall -g -c Barister.cpp

Employee.o: Employee.cpp Employee.h
	g++ -Wall -g -c Employee.cpp

clean:
	rm -f *.o work