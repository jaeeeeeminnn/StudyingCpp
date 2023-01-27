#include <iostream>
using namespace std;

//P.239 chap5 ex 5-7 ���� �Ű� ������ ���� �Լ� ����� ����

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int _r) { radius = _r; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int _r) { radius = _r; }
};

void readRadius(Circle &c) {
	int r;
	cout << "���� ������ �������� �Է��ϼ��� >> ";
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << endl;
}