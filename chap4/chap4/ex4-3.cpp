#include <iostream>
using namespace std;

//P.166 ex 4-3 ��ü �迭 �ʱ�ȭ

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	void setRadius(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {
	radius = r;
}

void Circle::setRadius(int r) {
	radius = r;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3] = { Circle(10), Circle(20), Circle() };

	for (int i = 0;i < 3;i++) {
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	}
}