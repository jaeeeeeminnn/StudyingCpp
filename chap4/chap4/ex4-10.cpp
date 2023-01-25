#include <iostream>
using namespace std;

//P.183 ex 4-10 Circle 배열의 동적 생성 및 반환 응용

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
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	
	int n, radius;
	int count = 0;

	cout << "원의 개수를 입력하세요 : ";
	cin >> n;
	if (n < 0) return 0;
	
	Circle* pArray = new Circle[n];

	for (int i = 0;i < n;i++) {
		cout << "원 " << i+1 << "의 반지름 값을 입력하세요 : ";
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
	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << "개 입니다." << endl;

	delete[] pArray;

}