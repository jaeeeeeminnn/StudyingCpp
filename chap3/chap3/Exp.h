#ifndef EXP_H
#define EXP_H

class Exp {
	int base, power;
public:
	Exp();
	Exp(int x);
	Exp(int y, int z);
	int getValue(); //������ ������ ����Ͽ� ����
	int getBase(); //���̽� �� ����
	int getExp(); // ���� �� ����
	bool equals(Exp b); //�� ��ü�� ��ü b�� ���� ������ �Ǻ��Ͽ� ����
};

#endif