#include <iostream>
using namespace std;

//P.174 ex 4-6 ������ �迭�� ���� �Ҵ� �� ��ȯ

int main() {
	
	int n;
	int sum = 0;
	float avg;

	cout << "�Է��� ������ ������ �Է��ϼ��� : ";
	cin >> n;
	if (n <= 0) {
		return 0;
	}

	int* p = new int[n];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
		return 0;
	}

	for (int i = 0;i < n;i++) {
		cout << i+1 << "��° ���� : ";
		cin >> p[i];
	}

	for (int i = 0;i < n;i++) {
		sum += p[i];
	}

	avg = sum / n;

	cout << "��� : " << avg << endl;

	delete[] p;
}