#include <iostream>
#include <string>
using namespace std;

//P.192 chap4 ex 4-11 string 클래스를 이용한 문자열 생성 및 출력

int main() {
	string str;
	string address("서울시 성북구 삼선동 389");
	string copyAddress(address);

	char text[] = { 'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;
}