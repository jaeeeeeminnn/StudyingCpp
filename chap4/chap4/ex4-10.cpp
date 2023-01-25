#include <iostream>
using namespace std;

//P.183 ex 4-10 Circle �迭�� ���� ���� �� ��ȯ ����

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }

};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	
	int n, radius;
	int count = 0;

	cout << "���� ������ �Է��ϼ��� : ";
	cin >> n;
	if (n < 0) return 0;
	
	Circle* pArray = new Circle[n];

	for (int i = 0;i < n;i++) {
		cout << "�� " << i+1 << "�� ������ ���� �Է��ϼ��� : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}
	
	Circle* p = pArray;

	for (int i = 0;i < n;i++) {
		cout << p->getArea() << ' ';
		if (p->getArea() > 100 && p->getArea() < 200) {
			count++;
		}
		p++;
	}
	cout << endl << "������ 100���� 200 ������ ���� ������ " << count << "�� �Դϴ�." << endl;

	delete[] pArray;

}