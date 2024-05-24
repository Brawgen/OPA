#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string stroka;
    bool flag = false;

    std::ifstream fin("stdfile.txt");
    std::getline(fin, stroka);

    std::string stroki;

    for (int i = 0; i < stroka.size(); i++) {
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

    std::getline(fin, stroka);

    if (flag == true) {
        std::cout << stroki + stroka;
    }


}

