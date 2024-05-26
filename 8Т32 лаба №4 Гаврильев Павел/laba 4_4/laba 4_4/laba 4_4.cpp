#include "readfile.h"
#include <string>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string stroka1;
    read_file(stroka1,"stdfile.txt");
    std::cout<<stroka1;
}
