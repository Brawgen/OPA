#include "insertionsort.h"

void insertionsort(float* mass, int size)
{
    float a;
    int j;
    for (int i = 1; i < size; i++) {
        a = mass[i];
        j = i - 1;
        while (j >= 0 && mass[j] > a) {
            mass[j + 1] = mass[j];
            j--;
        }
        mass[j + 1] = a;
    }
}
