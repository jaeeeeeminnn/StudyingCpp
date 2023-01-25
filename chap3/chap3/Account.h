#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class Account {
	string name;
	int id;
	int balance;
public:
	Account(string name, int id, int balance);
	void deposit(int money);
	int withdraw(int money);
	int inquiry();
	string getOwner();
};

#endif