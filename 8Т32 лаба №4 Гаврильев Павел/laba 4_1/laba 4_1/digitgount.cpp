#include "digitgount.h"

void digitcount(char* stroka)
{
    int count = 0;
    for (int i = 0; i <strlen(stroka); i++) {
        if (stroka[i] > 47 && stroka[i] < 58) {
            count++;
        }
    }
    std::cout << "Количество цифр в файле>>" << count;
}
