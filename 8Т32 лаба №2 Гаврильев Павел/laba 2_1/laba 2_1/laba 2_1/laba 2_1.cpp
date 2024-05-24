#include <iostream>
#include "sortbubble.h"
#include "insertionsort.h"
#include "mergesort.h"

int main()
{
	setlocale(LC_ALL, "ru");
	int size;
	std::cout << "Введите количество чисел:";
	std::cin >> size;
	while (size <= 0) {
		std::cout << "Кол-во чисел не может быть отрицательным или равным нулю. Введите еще раз::";
		std::cin >> size;
	}
	float* mass = new float[size];
	for (int i = 0; i < size; i++) {
		std::cout << "Введите " << i + 1 << " элемент:";
		std::cin>> mass[i];
	}
	
	//sortbubble(mass, size);
	//insertionsort(mass, size);
	mergesort(mass, size);
	std::cout << "\nОтсортированный массив:";
	for (int i = 0; i < size; i++) {
		std::cout << mass[i] << " ";
	}
	delete[] mass;
}

