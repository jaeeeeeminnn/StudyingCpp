#include <iostream>
using namespace std;

//P.110 ex 3-3 2���� �����ڸ� ���� Circle Ŭ����

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "������ " << radius << "�� �� ����" << endl;
}

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