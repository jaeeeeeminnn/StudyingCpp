#include <iostream>
using namespace std;

//P.161 ex 4-2 Circle Ŭ������ �迭 ���� �� Ȱ��

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
	Circle circleArray[3];

	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3;i++) {
		cout << "Circle " << i << "�� ������ " << circleArray[i].getArea() << endl;
	}

	Circle* p;
	p = circleArray;
	for (int i = 0;i < 3;i++) {
		cout << "Circle " << i << "�� ������ " << p->getArea() << endl;
		p++;
	}
}