#include <iostream>
using namespace std;

//P.160 ex 4-1 객체 포인터 선언 및 활용

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	//객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;

	//객체 포인터로 멤버 접근
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}