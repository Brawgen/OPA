#include "readfile.h"
#include "alphabet.h"
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "ru");
    std::string stroka;
    stroka = read_file(stroka, "stdfile.txt");
    alphabet(stroka);
}

