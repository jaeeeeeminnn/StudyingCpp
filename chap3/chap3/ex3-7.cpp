#include <iostream>
using namespace std;

//P.122 ex 3-7 Circle 클래스에 소멸자 작성 및 실행

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle(); //소멸자 선언
	double getArea();
};

Circle::Circle() : Circle(1) { }

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 " << radius << "인 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
}
