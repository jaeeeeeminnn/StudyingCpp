#include <iostream>
using namespace std;

//P.224 chap5 ex 5-1 '���� ���� ȣ��'�� �Ű� ������ ������ ������� ������ Ȯ���ϴ� ����

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int _r) { radius = _r; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int _r) {
	radius = _r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
}