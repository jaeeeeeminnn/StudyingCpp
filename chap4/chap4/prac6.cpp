#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (true) {
		cout << ">> ";
		getline(cin, s, '\n');
		int len = s.length();

		if (s == "exit") break;

		string result = "";
		for (int i = len;len > 0; len--) {
			result += s.at(len - 1);
		}
		cout << result << endl;
	}

}