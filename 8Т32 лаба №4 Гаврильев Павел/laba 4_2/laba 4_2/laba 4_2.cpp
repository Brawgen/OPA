#include <iostream>
#include <fstream>
#include "digitsum.h"
#include "filesize.h"

int main()
{
    setlocale(LC_ALL, "ru");
    char* stroka = new char[filesize("stdfile.txt")];
    std::cout << "Сумма цифр слов состоящих только из цифр: ";
    std::ifstream fin("stdfile.txt");
    while (fin.getline(stroka, filesize("stdfile.txt"))) {
        digitsum(stroka);
        std::cout<<""<<std::endl;
    }
    fin.close();
}

