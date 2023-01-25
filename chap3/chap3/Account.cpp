#include "Account.h"

Account::Account(string name, int id, int balance) {
	this->name = name;
	this->id = id;
	this->balance = balance;
}

string Account::getOwner() {
	return this->name;
}

void Account::deposit(int money) {
	this->balance += money;
}

int Account::withdraw(int money) {
	if (money > balance) {
		money = balance;
		balance = 0;
	}
	else {
		this->balance -= money;
	}
	return money;
}

int Account::inquiry() {
	return this->balance;
}