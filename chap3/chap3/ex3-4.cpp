#include <iostream>
using namespace std;

//P.113 ex 3-4 위임 생성자 만들기 연습

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}