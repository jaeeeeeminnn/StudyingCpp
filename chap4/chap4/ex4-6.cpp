#include <iostream>
using namespace std;

//P.174 ex 4-6 정수형 배열의 동적 할당 및 반환

int main() {
	
	int n;
	int sum = 0;
	float avg;

	cout << "입력할 정수의 개수를 입력하세요 : ";
	cin >> n;
	if (n <= 0) {
		return 0;
	}

	int* p = new int[n];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다." << endl;
		return 0;
	}

	for (int i = 0;i < n;i++) {
		cout << i+1 << "번째 정수 : ";
		cin >> p[i];
	}

	for (int i = 0;i < n;i++) {
		sum += p[i];
	}

	avg = sum / n;

	cout << "평균 : " << avg << endl;

	delete[] p;
}