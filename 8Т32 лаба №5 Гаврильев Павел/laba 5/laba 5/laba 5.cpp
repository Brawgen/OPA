#include <iostream>
#include <string>
#include <random>
#include "work.h"

using namespace std;

int main()
{
	int front=0, rear=0;
	bool k1 = false;
	bool k2 = false;
	bool k3 = false;
	int size1 = 0;
	int size2 = 0;
	int size3 = 0;
	setlocale(LC_ALL, "ru");
	std::random_device rd;//получение началоьного значения от аппаратного обеспечения
	std::mt19937 gen(rd());//создайте объект класса engine
	std::uniform_int_distribution<> digitdist(1, 50);//диапазон для чисел
	int size = digitdist(gen);
	rear = size;
	if (size > 0 and size < 16) {
		k1 = true;
		size1 = size;
		size2 = 0;
		size3 = 0;
	}
	if (size > 15 and size < 31) {
		k1 = true;
		k2 = true;
		size2 = size/2;
		if (size%2==0)
		{
			size1 = size / 2;
		}
		else {
			size1 = size / 2+1;
		}
		size3 = 0;
	}
	if (size > 30) {
		k1 = true;
		k2 = true;
		k3 = true;
		size2 = size / 3;
		size3 = size / 3;
		if (size % 3 != 0)
		{
			size1 = size / 3+1;
		}
		else {
			size1 = size / 3;
		}
	}
	int* mass = new int[size];
	int* mass1 = new int[size1];
	int* mass2 = new int[size2];
	int* mass3 = new int[size3];
	for (int i=0; i <size; i++) {
		mass[i] = i + 1;
	}
	while (size!=0) {
		cout << "\x1B[2J\x1B[H";
		
		cout << "___|\n___|\n___|";
		if (k1 == true and k2 == false and k3 == false) {
			for (int j = 0; j < size; j++) {
				mass1[j] = mass[j];
			}
		}
		if (k1 == true and k2 == true and k3 == false) {
			int l = 0;
			for (int j = 0; j < size; j++) {
				mass1[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
				mass2[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
			}
		}
		if (k1 == true and k2 == true and k3 == true) {
			int l = 0;
			for (int j = 0; j < size; j++) {
				mass1[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
				mass2[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
				mass3[j] = mass[l];
				l++;
				if (l == size) {
					break;
				}
			}
		}
	work(mass1, mass2, mass3, size1,size2, size3);
	size = 0;
	}
	delete[] mass;
	delete[] mass1;
	delete[] mass2;
	delete[] mass3;
}