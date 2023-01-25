#include <iostream>
using namespace std;

//P.115 ex 3-5 ��� ���� �ʱ�ȭ�� ���� ������ Ȱ��

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show();
};

Point::Point() : Point(0, 0) { }

Point::Point(int a, int b) : x(a), y(b) { }

void Point::show() {
	cout << "(" << x << "," << y << ")" << endl;
}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}