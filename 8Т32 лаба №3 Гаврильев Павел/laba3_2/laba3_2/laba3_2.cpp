#include <iostream>
#include "incorrectioninput.h"
#include "diagonalaverage.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int n = 0, d=0;
    std::cout << "Программа для нахождения средней арифмитической диагоналей параллельной главной." << std::endl;
    std::cout << "Введите размер матрицы n>>";
    std::cin >> n;  //ввод размерности массива
    n = incorrectioninput(n, 1); //проверка
    d = n * 2 - 1;//количество диагоналей

    float* arr = new float [d]; //создание массивов
    float** mass = new float* [n];
    for (int i = 0; i < n; i++) {
        mass[i] = new float[n];
    }

    for (int i = 0; i < n; i++) { //заполнение массива
        for (int j = 0; j < n; j++) {
            std::cout << "Введите элемент массива " << "(" << i<<","<<j << ")>>";
            std::cin >> mass[i][j];
            mass[i][j] = incorrectioninput(mass[i][j], 2);
        }
    }
    
    diagonalaverage(mass, arr, d, n); //вычисление среднего арифмитического диагоналей
    

    std::cout << "Среднее арифмитическое диагоналей параллельных главной>> "; //вывод ср. арифм. диагоналей
    for (int i = 0; i < d; i++) {
        std::cout << arr[i]<<" ";
    }

    for (int i = 0; i < n; i++) { //очистка массивов
        delete[] mass[i];
    }
    delete[] mass;
    delete[] arr;
}

