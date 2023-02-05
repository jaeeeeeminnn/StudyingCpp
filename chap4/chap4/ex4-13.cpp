#include <iostream>
#include <string>
using namespace std;

//P.199 chap4 ex 4-13 문자열을 입력 받고 회전시키기

int main() {
	string s;

	cout << "아래에 문자열을 입력하세요. 빈 칸이 있어도 됩니다.(한글안됨)" << endl;
	getline(cin, s, '\n');
	int len = s.length();

	for (int i = 0;i < len;i++) {
		string first = s.substr(0,1);
		string sub = s.substr(1, len - 1);

		s = sub + first;
		cout << s << endl;
	}
}