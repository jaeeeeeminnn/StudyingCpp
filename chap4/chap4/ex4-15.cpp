#include <iostream>
#include <string>
using namespace std;

//P.201 chap4 ex 4-15 ���ڿ� find �� replace

int main() {
	string s;
	int startIndex = 0;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
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