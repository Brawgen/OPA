#include <iostream>
#include <string>
#include "randomizer.h"

int main()
{
	setlocale(LC_ALL, "ru");
	std::string  stroka{ "00000000000" };
	std::cout << "Сгенерированная строка>>";
	randomizer(stroka);
	
}

