#include "randomizer.h"

void randomizer(std::string stroka)
{
	std::random_device rd;//��������� ����������� �������� �� ����������� �����������
	std::mt19937 gen(rd());//�������� ������ ������ engine
	std::uniform_int_distribution<> digitdist(48, 57);//�������� ��� �����
	std::uniform_int_distribution<> symboldist(0, 32);//�������� ��� ��������
	std::uniform_int_distribution<> binarydist(48, 50);//�������� ��� 0 � 1

	int symbol[] = { 33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124,125,126 };//������ �������� � ASCII
	bool flag = false;//���� ��� 1

	for (int i = 0; i < 4; i++) {//��������� �������
		stroka[i] = digitdist(gen);
	}
	for (int i = 4; i < 6; i++) {//��������� ���������
		stroka[i] = symbol[symboldist(gen)];
	}
	while (!flag)
		
		for (int i = 6; i < 10; i++) {//��������� 0 � 1
			stroka[i] = binarydist(gen);
			if (stroka[i] == 49) {
				stroka = true;
			}
		}
	std::cout << stroka;
}
