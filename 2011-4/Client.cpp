#include <iostream>
#include "Client.h"

using namespace std;

Client::Client(const char* name):name(name){owes = 0;}

int Client::getOwes(){
	return owes;
}
void Client::pay(int amount){
	owes+= amount;
}

std::ostream& operator<<(std::ostream& o, Client& client){
	return o << client.name << ": owes " << client.owes << endl;
}