#include <iostream>
using namespace std;

//P.179 ex 4-8 Circle ��ü�� ���� ���� �� ��ȯ ����

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
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
	int radius;
	while (true) {
		cout << "���� �������� �Է��ϼ���(������ ����) : ";
		cin >> radius;
		if (radius < 0) {
			break;
		}
		Circle* p = new Circle(radius);
		cout << "���� ������ " << p->getArea() << endl;
		delete p;
	}
}