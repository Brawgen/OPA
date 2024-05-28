#include "readfile.h"
#include <iostream>
#include <string>

int main()
{
    std::string stroka;
    stroka = read_file(stroka, "stdfile.txt");
    std::cout << stroka;
}

