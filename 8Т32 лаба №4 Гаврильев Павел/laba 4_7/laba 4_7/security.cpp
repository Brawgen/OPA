#include "security.h"

std::string security(std::string stroka)
{
    int mode = 0;
    std::cout << "������� �����(0-����������, 1-������������):";
    std::cin >> mode;
    while ((mode != 0) and (mode != 1)) {
        std::cout << "������ �����, ������ 0 ��� 1:";
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
    std::cout << "��������.";
    return stroka;
}
