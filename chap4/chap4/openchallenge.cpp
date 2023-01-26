#include <iostream>
#include <string>
using namespace std;

class Player {
	string name;
public:
	Player() {};
	void setName(string _name) { name = _name; }
	string getName() { return name; }
};


class WordGame {
	Player* p;
	int n;
public:
	void run();
	~WordGame() { delete[] p; }
};

void WordGame::run() {
	cout << "끝말 잇기 게임을 시작합니다." << endl;
	cout << "게임에 참가하는 인원 수를 입력하세요 : ";
	cin >> n;

	p = new Player[n];

	for (int i = 0;i < n;i++) {
		string name;
		cout << "참가자의 이름을 입력하세요. 빈칸 없이 >> ";
		cin >> name;
		p[i].setName(name);
	}

	string a = "아버지";
	cout << "시작하는 단어는 아버지입니다." << endl;

	int i = 0;
	while (true) {
		string ans;
		
		cout << p[i%n].getName() << ">>";
		cin >> ans;

		if (a.at(a.size() - 2) == ans.at(0) &&
			a.at(a.size() - 1) == ans.at(1)) {
			a = ans;
		}
		else {
			cout << p[i%n].getName() << " 틀렸습니다." << endl;
			break;
		}
		++i;

	}
}

int main() {
	WordGame wordGame;

	wordGame.run();
}