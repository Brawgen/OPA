#include "readfile.h"
#include <string>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string stroka;
    read_file(stroka,"stdfile.txt");
    std::cout<<stroka;
}
