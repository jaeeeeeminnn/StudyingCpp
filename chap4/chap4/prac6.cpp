#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
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