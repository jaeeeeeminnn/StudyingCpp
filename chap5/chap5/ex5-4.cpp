#include <iostream>
using namespace std;

//P.235 chap5 ex 5-4 객체에 대한 참조

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int _r) { radius = _r; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int _r) { radius = _r; }
};

int main() {
	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea();
}