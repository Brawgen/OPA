#include "randomizer.h"

void randomizer(std::string stroka)
{
	std::random_device rd;//получение началоьного значения от аппаратного обеспечения
	std::mt19937 gen(rd());//создайте объект класса engine
	std::uniform_int_distribution<> digitdist(48, 57);//диапазон для чисел
	std::uniform_int_distribution<> symboldist(0, 32);//диапазон для символов
	std::uniform_int_distribution<> binarydist(48, 50);//диапащон для 0 и 1

	int symbol[] = { 33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124,125,126 };//массив символов в ASCII
	bool flag = false;//флаг для 1

	for (int i = 0; i < 4; i++) {//заполение числами
		stroka[i] = digitdist(gen);
	}
	for (int i = 4; i < 6; i++) {//заполение символами
		stroka[i] = symbol[symboldist(gen)];
	}
	while (!flag)
		
		for (int i = 6; i < 10; i++) {//заполение 0 и 1
			stroka[i] = binarydist(gen);
			if (stroka[i] == 49) {
				stroka = true;
			}
		}
	std::cout << stroka;
}
