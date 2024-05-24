#include "sortbubble.h"

void sortbubble(float* mass, int size)
{
	float a;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (mass[j] > mass[j + 1]) {
				a = mass[j];
				mass[j] = mass[j + 1];
				mass[j + 1] = a;
			}
		}
	}
}
