#include <iostream>
#include <string>
using namespace std;

//P.200 chap4 ex 4-14 ���ڿ� ó�� ���� - ���� ���ڿ��� �Է¹޾� ���� ����

int main() {
	string s;
	cout << "�������ڿ��� �Է��ϼ���(�� : 34+23+110+220) >> ";
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;

	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) { //+ ��ã���� ex) 23
			string part = s.substr(startIndex); //startIndex���� ������ part = 23
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}

		int count = fIndex - startIndex;
		string part = s.substr(startIndex, count);

		cout << part << endl;
		sum += stoi(part);
		startIndex = fIndex + 1;
	}
	cout << "���ڵ��� ���� " << sum << endl;
}