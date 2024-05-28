#include "alphabet.h"

void alphabet(std::string stroka)
{
    bool flag;
    for (int i = 0; i < size(stroka); i++) {
        flag = false;
        if ((stroka[i] == i + 97) or (stroka[i] == i + 65)) {
            flag = true;
        }
        if (flag == false) {
            std::cout << stroka[i] << std::endl;
            break;
        }
    }
    if (flag) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
}
