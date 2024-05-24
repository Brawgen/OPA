#include <iostream>
#include "read_file.h"
#include <fstream>
#include "digitsum.h"

int main()
{
    setlocale(LC_ALL, "ru");
    char* stroka = new char[500];
    read_file(stroka, "stdfile.txt");
    std::cout << "Сумма цифр слов состоящих только из цифр: ";

    /*for (int i = 0; i <= strlen(stroka); i++) {
        if (stroka[i] == 32 || (stroka[0] > 47 && stroka[0] < 58)) {
            int sum = 0;
            if (stroka[0] > 47 && stroka[0] < 58) {
                sum = sum + (int(stroka[0]) - 48);
            }
            bool flag = true;
            while (flag == true) {
                for (int k = i + 1; k <= strlen(stroka); k++) {
                    bool flag1 = false;
                    if (stroka[k] > 47 && stroka[k] < 58) {
                        flag1 = true;
                    }
                    if (stroka[k] == 0) {
                        if (sum != 0) {
                            std::cout << sum << " ";
                        }
                        return 0;
                    }
                    if (flag1 == false) {
                        flag = false;
                        i = k - 1;
                        if (sum != 0) {
                            std::cout << sum << " ";
                        }
                        break;
                    }
                    else {
                        sum = sum + (int(stroka[k]) - 48);
                    }
                }
            }
        }
    }*/

    digitsum(stroka);
}

