#include <iostream>
#include <fstream>
#include "read_file.h"
#include "filesize.h"
#include "digitgount.h"

int main()
{
    setlocale(LC_ALL, "ru");
    char* stroka=new char[filesize("stdfile.txt")];
    read_file(stroka, "stdfile.txt");
    digitcount(stroka);
}

