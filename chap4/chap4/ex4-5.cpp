#include <iostream>
using namespace std;

//P.172 ex 4-5 정수형 공간의 동적 할당 및 반환

int main() {
	int* p = new int;
	if (!p) {
		cout << "메모리를 할당할 수 없습니다." << endl;
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}