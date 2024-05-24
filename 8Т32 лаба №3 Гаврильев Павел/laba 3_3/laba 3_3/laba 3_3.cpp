#include <iostream>
#include "incorrectioninput.h"
#include "columnreplace.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int m = 0, n = 0, a=0, b=0;
    
    std::cout << "Программа для замены первого отрицательного столбца и указанного столбца заданного массива." << std::endl;
    std::cout << "Введите число строк m>>";
    std::cin >> m;
    m = incorrectioninput(m, 1); //проверка m
    std::cout << "Введите число столбцов n>>";
    std::cin >> n;
    n = incorrectioninput(n, 1); //проверка n
    float** mass = new float* [m];
    for (int i = 0; i < m; i++) {
        mass[i] = new float[n];
    }

    for (int i = 0; i < m; i++) { //заполнение массива
        for (int j = 0; j < n; j++) {
            std::cout << "Введите элемент массива " << "(" << i << "," << j << ")>>";
            std::cin >> mass[i][j];
            mass[i][j] = incorrectioninput(mass[i][j], 2);
        }
    }

    std::cout << "Введите номер столбца который хотите поменять местами>>";//ввод номера столбца
    std::cin >> b;
    while (b <= 0) {
        std::cout << "Номер столбца не может быть отрицательным или равным 0. Введите еще раз>>";
        std::cin >> b; b = incorrectioninput(b, 2);
    }
    while (b > n) {
        std::cout << "Номер столбца не может быть больше количества столбцов. Введите еще раз>>";
        std::cin >> b; b = incorrectioninput(b, 2);
    }

    columnreplace(mass, m, n, b);

    std::cout << "Преобразованный массив." << std::endl; //вывод преобразованного массива
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << mass[i][j] << "  ";
        }
        std::cout << '\n';
    }

    for (int i = 0; i < m; i++) { //очистка массива
        delete[] mass[i];
    }
    delete[] mass;
}

