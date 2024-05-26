#include "lineconnection.h"

void lineconnection(std::string file_name)
{
    std::string stroka;
    bool flag = false;
    std::string stroki;
    std::ifstream fin(file_name);//открытие файла
    if (fin.is_open()) {//проверка на открытие
        std::cout << "Файл открыт успешно." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла.";
        exit(0);
    }

    std::getline(fin, stroka);//получение первой строки

    for (int i = 0; i < stroka.size(); i++) {//поиск символов которые встречаются два раза
        int count = 0;
        for (int j = 0; j < stroka.size(); j++) {
            if (stroka[i] == stroka[j]) {
                count++;
            }
        }
        if (count == 2) {
            stroki += stroka[i];
            flag = true;
        }
    }

    std::getline(fin, stroka);//получение второй строки

    if (flag == true) {//соединение строки
        std::cout <<"Полученна строка>>" << stroki + stroka;
    }
    else {
        std::cout << "Такой строки нету.";
    }
    fin.close();//закрытие файла
}
