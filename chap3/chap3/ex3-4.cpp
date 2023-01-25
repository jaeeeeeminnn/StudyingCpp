#include <iostream>
using namespace std;

//P.113 ex 3-4 ���� ������ ����� ����

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
	cout << "������ " << radius << "�� �� ����" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}