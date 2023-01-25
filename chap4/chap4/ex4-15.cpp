#include <iostream>
#include <string>
using namespace std;

//P.201 chap4 ex 4-15 문자열 find 및 replace

int main() {
	string s;
	int startIndex = 0;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore();

	string findString;
	cout << endl << "find : ";
	getline(cin, findString, '\n');
	
	string replaceString;
	cout << "replace : ";
	getline(cin, replaceString, '\n');

	while (true) {
		int fIndex = s.find(findString, startIndex);
		if (fIndex == -1) {
			break;
		}
		s.replace(fIndex, findString.length(), replaceString);
		startIndex = fIndex + replaceString.length();
	}
	cout << endl << s << endl;
}