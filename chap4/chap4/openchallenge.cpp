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
	cout << "���� �ձ� ������ �����մϴ�." << endl;
	cout << "���ӿ� �����ϴ� �ο� ���� �Է��ϼ��� : ";
	cin >> n;

	p = new Player[n];

	for (int i = 0;i < n;i++) {
		string name;
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ���� >> ";
		cin >> name;
		p[i].setName(name);
	}

	string a = "�ƹ���";
	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�." << endl;

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
			cout << p[i%n].getName() << " Ʋ�Ƚ��ϴ�." << endl;
			break;
		}
		++i;

	}
}

int main() {
	WordGame wordGame;

	wordGame.run();
}