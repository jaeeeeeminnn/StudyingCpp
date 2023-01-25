#include <iostream>
using namespace std;

//P.160 ex 4-1 ��ü ������ ���� �� Ȱ��

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

	//��ü �̸����� ��� ����
	cout << donut.getArea() << endl;

	//��ü �����ͷ� ��� ����
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

	p = &pizza;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;
}