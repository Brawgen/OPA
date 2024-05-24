#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::string stroka;

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
        if (count == 1) {
            stroki += stroka[i];
        }
    }

    std::getline(fin, stroka);

    std::cout << stroki+stroka;

   /* std::getline(fin, stroka);
    fin.close();
    
    std::cout << stroka << std::endl;*/


}

