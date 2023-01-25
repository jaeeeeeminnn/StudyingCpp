#include <iostream>
using namespace std;

#include "Oval.h"

Oval::Oval() {
	this->width = this->height = 1;
}

Oval::Oval(int w, int h) {
	this->width = w;
	this->height = h;
}

Oval::~Oval() {
	cout << "Oval º“∏Í -> ≥ ∫Ò : " << this->width << endl;
	cout << "Oval º“∏Í -> ≥Ù¿Ã : " << this->height << endl;
}

int Oval::getWidth() {
	return this->width;
}

int Oval::getHeight() {
	return this->height;
}

void Oval::set(int w, int h) {
	this->width = w;
	this->height = h;
}

void Oval::show() {
	cout << "Width = " << this->width << ", " << "Height = " << this->height << endl;
}