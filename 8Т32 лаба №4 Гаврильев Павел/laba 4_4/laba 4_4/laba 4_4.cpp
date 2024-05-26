#include "read_file.h"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string stroka;
    read_file(stroka,"stdfile.txt");
}
