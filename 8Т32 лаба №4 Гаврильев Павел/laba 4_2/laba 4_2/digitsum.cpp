#include "digitsum.h"

void digitsum(char* stroka)
{
    bool flag3 = false;
    for (int i = 0; i <= strlen(stroka); i++) {
        if (stroka[i] == 32 || (stroka[0] > 47 && stroka[0] < 58 && i==0)) {
            int sum = 0;
            if (stroka[i] > 47 && stroka[i] < 58 && i==0) {
                std::cout << stroka[i];
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
                        abort;
                    }
                    if (flag1 == false) {
                        flag = false;
                        i = k - 1;
                        if (sum != 0) {
                            flag3 = true;
                            std::cout <<"=" << sum << " ";
                        }
                        break;
                    }
                    else {
                        std::cout << stroka[k];
                        sum = sum + (int(stroka[k]) - 48);
                    }
                }
            }
        }
    }
    if (flag3 == false) {
        std::cout << "Таких слов нет.";
    }
}
