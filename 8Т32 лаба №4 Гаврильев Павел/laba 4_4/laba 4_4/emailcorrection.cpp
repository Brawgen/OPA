#include "emailcorrection.h"

void emailcorrection(std::string stroka)
{
    //33 35-39 42-43 45 47 61 63 94-96 123-126 символы 48-57 числа 65-90 97-122 буква
    int symbol[] = { 33,35,36,37,38,39,42,43,45,47,61,63,94,95,96,123,124,125,126 };//разрешенные символы в ASCII
    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    int i = 0;
    for (i = 0; i < size(stroka); i++) {//проверка локальной части
        int sflag = false;
        for (int j = 0; j < sizeof(symbol); j++) {
            if (stroka[i] == symbol[j]) {
                sflag = true;
            }
        }
        if ((stroka[i] < 123 and stroka[i]>96) or (stroka[i] < 58 and stroka[i]>46) or (sflag == true) or (stroka[i] < 91 and stroka[i]>64)) {
            flag1 = true;
        }
        else {
            flag1 = false;

        }
        if (stroka[i] == 64) {
            flag1 = true;
            i++;
            break;
        }
    }
    for (i; i < size(stroka); i++) {//проверка домена
        flag2 = false;
        if ((stroka[i] < 123 and stroka[i]>96) or (stroka[i] < 58 and stroka[i]>46) or (stroka[i] < 91 and stroka[i]>64) or (stroka[i] == 45)) {
            flag2 = true;
        }
        if ((stroka[i] == 46) and (size(stroka) - i > 2)) {
            flag2 = true;
            i++;
            break;
        }
        if (flag2 == false) {
            flag2 = false;
            break;
        }


    }
    for (i; i < size(stroka); i++) {//проверка после точки
        flag3 = false;
        if (((stroka[i] < 123 and stroka[i]>96) or (stroka[i] < 58 and stroka[i]>46) or (stroka[i] < 91 and stroka[i]>64))  and (flag2 == true)) {
            flag3 = true;
        }
    }
    if (flag3 == true) {//вывод проверки
        std::cout << "Email корректен.";
    }
    else {
        std::cout << "Email некорректен.";
    }
}
