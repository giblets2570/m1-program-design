#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>

class Client{
private:
	const char* name;
	int owes;
public:
	Client(const char* name);
	int getOwes();
	void pay(int amount);
	friend std::ostream& operator<<(std::ostream& o, Client& client);
};

#endif