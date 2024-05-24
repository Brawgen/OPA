#include "incorrectioninput.h"

float incorrectioninput(float a, int b)
{
	if (b == 1) { //проверка на тип данных и отрицательность
		while (std::cin.fail()) {
			std::cout << "Ошибка ввода. Повторите ввод>>";
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cin >> a;
		}
		while (a < 0) {
			std::cout << "Количество элементов не может быть отрицательным. Повторите ввод>>";
			std::cin >> a;
		}
		while (a == 0) {
			std::cout << "Количество элементов не может быть равным 0. Повторите ввод>>";
			std::cin >> a;
		}
		return a;
	}
	if (b == 2) { //проверка на тип данных 
		while (std::cin.fail()) {
			std::cout << "Ошибка ввода. Повторите ввод>>";
			std::cin.clear();
			std::cin.ignore(100, '\n');
			std::cin >> a;
		}
	}
}
