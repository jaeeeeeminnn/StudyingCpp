#include <iostream>
using namespace std;

//P.172 ex 4-5 ������ ������ ���� �Ҵ� �� ��ȯ

int main() {
	int* p = new int;
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
		return 0;
	}

	*p = 5;
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;
}