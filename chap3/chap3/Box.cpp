#include <iostream>
using namespace std;

#include "Box.h"

Box::Box(int w, int h) {
	setSize(w, h);
	c = '*';
}

void Box::setFill(char f) {
	c = f;
}

void Box::setSize(int w, int h) {
	this->width = w;
	this->height = h;
}

void Box::draw() {
	for (int n = 0 ; n < height ; n++) {
		for (int m = 0;m < width;m++) {
			cout << this->c;
		}
		cout << endl;
	}
}