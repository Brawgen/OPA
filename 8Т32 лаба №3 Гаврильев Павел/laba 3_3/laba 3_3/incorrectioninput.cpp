#include "incorrectioninput.h"

float incorrectioninput(float a, int b)
{
	if (b == 1) { //�������� �� ��� ������ � ���������������
		while (std::cin.fail()) {
			std::cout << "������ �����. ��������� ����>>";
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cin >> a;
		}
		while (a < 0) {
			std::cout << "���������� ��������� �� ����� ���� �������������. ��������� ����>>";
			std::cin >> a;
		}
		while (a == 0) {
			std::cout << "���������� ��������� �� ����� ���� ������ 0. ��������� ����>>";
			std::cin >> a;
		}
		return a;
	}
	if (b == 2) { //�������� �� ��� ������ 
		while (std::cin.fail()) {
			std::cout << "������ �����. ��������� ����>>";
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cin >> a;
		}
	}
}
