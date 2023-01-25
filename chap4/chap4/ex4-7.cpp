#include <iostream>
using namespace std;

//P.178 ex 4-7 Circle ��ü�� ���� ���� �� ��ȯ

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) {radius = r;}
	double getArea() { return 3.14 * radius * radius; }

};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle* p, * q;
	p = new Circle; //p = new Circle();�� ��
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete q;
	delete p;
}