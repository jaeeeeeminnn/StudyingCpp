#include <iostream>
using namespace std;

//P.122 ex 3-7 Circle Ŭ������ �Ҹ��� �ۼ� �� ����

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); //�Ҹ��� ����
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� �� ����" << endl;
}

Circle::~Circle() {
	cout << "������ " << radius << "�� �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
}
