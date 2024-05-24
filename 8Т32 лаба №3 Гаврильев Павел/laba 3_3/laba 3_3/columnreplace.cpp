#include "columnreplace.h"

void  columnreplace(float** mass, int m, int n, int b)
{
    int a = 0;
    bool flag = false;
    float c = 0;
    for (int i = 0; i < n; i++) { //нахождение первого отрицательного столбца
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (mass[j][i] < 0) {
                count++;
            }
        }
        if (count == m) {
            flag = true;
            a = i;
            break;
        }
    }

    if (flag == true) { //замена стобцов
        for (int i = 0; i < m; i++) {
            c = mass[i][b - 1];
            mass[i][b - 1] = mass[i][a];
            mass[i][a] = c;
        }
    }
}
