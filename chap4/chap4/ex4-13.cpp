#include <iostream>
#include <string>
using namespace std;

//P.199 chap4 ex 4-13 ���ڿ��� �Է� �ް� ȸ����Ű��

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�.(�ѱ۾ȵ�)" << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0;i < len;i++) {
		string first = s.substr(0,1);
		string sub = s.substr(1, len - 1);

		s = sub + first;
		cout << s << endl;
	}
}