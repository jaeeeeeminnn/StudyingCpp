#include <iostream>
#include <string>
using namespace std;

//P.200 chap4 ex 4-14 문자열 처리 응용 - 덧셈 문자열을 입력받아 덧셈 실행

int main() {
	string s;
	cout << "덧셈문자열을 입력하세요(예 : 34+23+110+220) >> ";
	getline(cin, s, '\n');
	int sum = 0;
	int startIndex = 0;

	while (true) {
		int fIndex = s.find('+', startIndex);
		if (fIndex == -1) { //+ 못찾으면 ex) 23
			string part = s.substr(startIndex); //startIndex부터 끝까지 part = 23
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
	cout << "숫자들의 합은 " << sum << endl;
}