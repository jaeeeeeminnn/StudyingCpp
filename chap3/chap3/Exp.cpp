#include <iostream>
#include <cmath>
using namespace std;

#include "Exp.h"

Exp::Exp():Exp(1) {}

Exp::Exp(int y, int z) {
	base = y;
	power = z;
}

Exp::Exp(int x) {
	base = x;
	power = 1;
}

int Exp::getValue() {
	return pow(base, power);
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return power;
}

bool Exp::equals(Exp b) {
	if (this->getValue() == b.getValue()) return true;
	else false;
}