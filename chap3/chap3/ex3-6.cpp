#include <iostream>
using namespace std;

//P.118 ex 3-6 Rectangel Ŭ���� �����

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int x, int y);
	Rectangle(int z);
	bool isSquare();
};

Rectangle::Rectangle() : Rectangle(1) { }

Rectangle::Rectangle(int x, int y) : width(x), height(y) { }

Rectangle::Rectangle(int z) : width(z), height(z) { }

bool Rectangle::isSquare() {
	if (this->width == this->height) return true;
	else return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}