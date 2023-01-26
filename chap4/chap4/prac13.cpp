#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Histogram {
	string s;
public:
	Histogram() { s = ""; }
	Histogram(string _s) { s = _s; }
	void put(string _s) { s += _s; }
	void putc(char _c) { s += _c; }
	void print();
};

void Histogram::print() {
	string result = "";
	string lowerResult = "";
	int count = 0;
	int alphacount = 0;
	int alpha[26];
	cout << s << endl << endl;
	
	for (int i = 0;i < s.length();i++) {
		if (isalpha(s[i])) {
			result += s[i];
			count++;
		}
	}

	for (int i = 0;i < result.length();i++) {
		lowerResult += tolower(result[i]);
	}
	char a = 'a';
	int index = 0;

	while (a <= 'z') {
		for (int i = 0;i < lowerResult.length();i++) {
			if (lowerResult[i] == a) {
				alphacount++;
			}
		}
		alpha[index] = alphacount;
		index++;
		a++;
		alphacount = 0;
	}
	

	cout << "ÃÑ ¾ËÆÄºª ¼ö´Â " << count << "°³ÀÔ´Ï´Ù." << endl;

	char alphabet = 'a';
	for (int i = 0;i<26; i++) {
		cout << alphabet << ' ' << "(" << alpha[i] << ")" << '\t';
		for (int j = 0;j < alpha[i];j++) {
			cout << '*';
		}
		cout << endl;
		alphabet++;
	}

}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
	//isalpha
}