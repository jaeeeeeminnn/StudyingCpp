#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() { name = ""; }
	Person(string _name) { name = _name; }
	string getName() { return name; }
	void setName(string _name) { name = _name; }
};

class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string _name, int _size);
	void show();
	void setName(int _num, string _name) { p[_num].setName(_name); }
	~Family() { delete[] p; }
};

Family::Family(string _name, int _size){ 
	p = new Person[_size];
	name = _name;
	size = _size;
}

void Family::show() {
	cout << name << " 가족은 다음과 같이 " << size << "명입니다." << endl;
	for (int i = 0;i < size;i++) {
		cout << p[i].getName() << '\t';
	}
	cout << endl;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
	
}