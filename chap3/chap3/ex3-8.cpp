#include <iostream>
using namespace std;

//P.124 ex 3-8 지역 객체와 전역 객체의 생성 및 소멸 순서

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