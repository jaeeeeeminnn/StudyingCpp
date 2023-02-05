#include <iostream>
using namespace std;

//P.239 chap5 ex 5-7 참조 매개 변수를 가진 함수 만들기 연습

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
	cout << "정수 값으로 반지름을 입력하세요 >> ";
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;
}