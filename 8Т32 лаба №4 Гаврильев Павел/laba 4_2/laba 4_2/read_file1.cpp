#include "read_file.h"

std::string read_file(std::string stroka, std::string file_name)
{
    std::ifstream fin(file_name);
    if (fin.is_open()) {
        std::cout << "���� ������ �������." << std::endl;
    }
    else {
        std::cout << "������ �������� �����.";
    }
    std::getline(fin, stroka);
    fin.close();
    return stroka;
}
