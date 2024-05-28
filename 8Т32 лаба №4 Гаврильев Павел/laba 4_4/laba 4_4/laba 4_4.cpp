#include "readfile.h"
#include <string>
#include <iostream>
#include "emailcorrection.h"

int main()
{
    //33 35-39 42-43 45 47 61 63 94-96 123-126 символы 48-57 числа 65-90 97-122 буква
    setlocale(LC_ALL, "ru");
    std::string stroka;
    stroka=read_file(stroka,"stdfile.txt");//чтение строки из файла
    std::cout << stroka;
    emailcorrection(stroka);//проверка Email адреса
    //посмотреть условное выражения
    
    
}
