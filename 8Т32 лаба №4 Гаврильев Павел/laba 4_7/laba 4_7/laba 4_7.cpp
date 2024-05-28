#include <iostream>
#include <fstream>
#include "readfile.h"
#include "rec_file.h"
#include "security.h"


int main()
{
    setlocale(LC_ALL, "ru");
    std::string stroka;
    stroka = read_file(stroka, "stdfile.txt");
    stroka = security(stroka);
    rec_file(stroka, "stdfile.txt");

   
}


