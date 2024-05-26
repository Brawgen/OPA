#include "read_file.h"

std::string read_file(std::string stroka, std::string file_name)
{
    std::ifstream fin(file_name);
    if (fin.is_open()) {
        std::cout << "Файл открыт успешно." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла.";
    }
    std::getline(fin, stroka);
    fin.close();
    return stroka;
}
