#include <iostream>
#include "read_file.h"
#include <fstream>
#include "digitsum.h"

int main()
{
    setlocale(LC_ALL, "ru");
    char* stroka = new char[200];
    read_file(stroka, "stdfile.txt");
    std::cout << "Сумма цифр слов состоящих только из цифр: ";

    digitsum(stroka);
}

