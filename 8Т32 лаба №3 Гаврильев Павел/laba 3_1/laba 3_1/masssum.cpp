#include "masssum.h"

void  masssum(int** mass, int d, int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < n; j++) {
            mass[i][j] = mass[i][j - 1] + d;
        }
    }
}
