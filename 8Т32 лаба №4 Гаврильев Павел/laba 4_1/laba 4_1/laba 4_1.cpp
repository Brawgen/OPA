#include <iostream>
#include "read_file.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int count = 0;
    char* stroka=new char[50];
    read_file(stroka, "stdfile.txt");
    int length=strlen(stroka);
    for (int i = 0; i < length; i++) {
        if (stroka[i] > 47 && stroka[i] < 58) {
            count++;
        }
    }
    std::cout << "Количество цифр в файле>>"<<count;
}

