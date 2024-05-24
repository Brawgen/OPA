#include "read_file.h"

void read_file(char* stroka, std::string file_name)
{
    std::ifstream fin(file_name);
    if (fin.is_open()) {
        std::cout << "Файл открыт успешно." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла.";
    }
    fin.getline(stroka, strlen(stroka));
    fin.close();
}
