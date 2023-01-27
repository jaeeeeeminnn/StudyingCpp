#include <iostream>
using namespace std;

//P.237 chap5 ex 5-5 참조 매개 변수로 평균 리턴하기

bool average(int a[], int size, int& avg) {
	if (size <= 0) return false;
	int sum = 0;
	for (int i = 0;i < size;i++) sum += a[i];
	avg = sum / size;
	return true;
}

int main() {
	int x[] = { 0,1,2,3,4,5 };
	int avg;
	if (average(x, 6, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;

	if (average(x, -2, avg)) cout << "평균은 " << avg << endl;
	else cout << "매개 변수 오류" << endl;
}