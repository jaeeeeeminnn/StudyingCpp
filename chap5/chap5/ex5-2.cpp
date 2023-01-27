#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; cout << "积己磊 角青 radius = " << radius << endl; }
	Circle(int _r) { radius = _r; cout << "积己磊 角青 radius = " << radius << endl; }
	~Circle() { cout << "家戈磊 角青 radius = " << radius << endl; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int _r) { radius = _r; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main() {
	Circle c;
	cout << c.getArea() << endl;

	c = getCircle();
	cout << c.getArea() << endl;
}