#include <iostream>
#include <fstream>
#include "read_file.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int count = 0;

    std::ifstream fin("stdfile.txt");
    fin.seekg(0, std::ios::end);
    int kol = int(fin.tellg())+1;
    fin.seekg(0, std::ios::beg);
    fin.close();
    char* stroka=new char[kol];
    std::cout << kol << std::endl;
    read_file(stroka, "stdfile.txt");
    int length=strlen(stroka);
    for (int i = 0; i < length; i++) {
        if (stroka[i] > 47 && stroka[i] < 58) {
            count++;
        }
    }
    std::cout << "Количество цифр в файле>>"<<count;
}

