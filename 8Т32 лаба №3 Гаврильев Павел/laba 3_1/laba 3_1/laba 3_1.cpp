#include <iostream>
#include "incorrectinput.h"
#include "masssum.h"

int main()
{   
    int m = 0, n = 0, d=0;
    setlocale(LC_ALL, "ru");
    std::cout << "Программа для вывода заданного массива."<<std::endl;
    std::cout << "Введите количество чисел набора m>>";
    std::cin >> m;
    m=incorrectinput(m,1);
    std::cout << "Введите число столбцов n>>";
    std::cin >> n;
    n = incorrectinput(n,1);
    std::cout << "Введите число D на которое будет увеличиваться столбцы>>";
    std::cin >> d;
    d = incorrectinput(d, 1);
    int** mass = new int* [m];
    for (int i = 0; i < m; i++) {
        mass[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        std::cout << "Введите элемент массива " << "(" << i<<",0)>>";
        std::cin >> mass[i][0];
        *mass[i] = incorrectinput(*mass[i], 2);
    }

    masssum(mass, d, m, n);

    std::cout << "Массив: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << mass[i][j]<<"  ";
        }
        std::cout << '\n'<<'\t';
    }
    for (int i = 0; i < m; i++) {
        delete[] mass[i];
    }
    delete[] mass;
}
