#include "diagonalaverage.h"

void  diagonalaverage(float** mass, float* arr, int d, int n)
{
    for (int i = 0; i < d; i++) { //вычисление среднего арифмитического диагоналей
        float sum = 0;
        if (i < n) {
            for (int j = 0; j <= i; j++) {
                sum = sum + mass[j][n - i + j - 1];
            }
            arr[i] = sum / (i + 1);
        }
        if (i >= n) {
            for (int j = 0; j < d - i; j++) {
                sum = sum + mass[i - n + 1 + j][j];
            }
            arr[i] = sum / (d - i);
        }
    }
}
