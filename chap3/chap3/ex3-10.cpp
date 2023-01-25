#include <iostream>
using namespace std;

//P.135 ex 3-10 Circle Ŭ������ C++ ����ü�� �̿��Ͽ� ���ۼ�

struct StructCircle { //C++ ����ü ����
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
	cout << "������ " << waffle.getArea();
}