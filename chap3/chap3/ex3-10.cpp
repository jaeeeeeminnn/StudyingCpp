#include <iostream>
using namespace std;

//P.135 ex 3-10 Circle 클래스를 C++ 구조체를 이용하여 재작성

struct StructCircle { //C++ 구조체 선언
private:
	int radius;
public:
	StructCircle(int r);
	double getArea();
};

StructCircle::StructCircle(int r) {
	radius = r;
}

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
}