#include <iostream>
using namespace std;

//P.124 ex 3-8 ���� ��ü�� ���� ��ü�� ���� �� �Ҹ� ����

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

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
	Circle fDonut(100);
	Circle fPizza(200);
}

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
}