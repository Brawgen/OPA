#include "mergesort.h"

void merge(float* mass, float* mass1, float* mass2, int mid1, int mid2, int size) {
    float a;
    for (int i = 0; i < mid1; i++) {
        mass[i] = mass1[i];
    }
    for (int i = 0; i < mid2; i++) {
        mass[i+mid1] = mass2[i];
    }
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


void mergesort(float* mass, int size){
    int mid1 = size / 2;
    int mid2 = size - mid1;
    if (size > 2) {
        float* mass1 = new float[mid1];
        float* mass2 = new float[mid2];
        for (int i = 0; i < mid1; i++) {
            mass1[i] = mass[i];
        }
        for (int i = 0; i < mid2; i++) {
            mass2[i] = mass[i + mid1];
        }
        mergesort(mass1, mid1);
        mergesort(mass2, mid2);
        merge(mass, mass1, mass2, mid1, mid2, size);
        delete[] mass1;
        delete[] mass2;

    }
    if (size == 2) {
        if (mass[0] > mass[1]) {
            float a = mass[0];
            mass[0] = mass[1];
            mass[1] = a;
        }
    }

}
