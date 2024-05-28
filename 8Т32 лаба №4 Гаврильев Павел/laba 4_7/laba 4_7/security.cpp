#include "security.h"

std::string security(std::string stroka)
{
    int mode = 0;
    std::cout << "Введите режим(0-шифрование, 1-дешифрование):";
    std::cin >> mode;
    while ((mode != 0) and (mode != 1)) {
        std::cout << "Ошибка ввода, только 0 или 1:";
        std::cin >> mode;
    }
    if (mode == 0) {
        for (int i = 0; i < size(stroka); i++) {
            stroka[i] = stroka[i] - 20;
        }
    }
    if (mode == 1) {
        for (int i = 0; i < size(stroka); i++) {
            stroka[i] = stroka[i] + 20;
        }
    }
    std::cout << "Записано.";
    return stroka;
}
