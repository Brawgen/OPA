#include "read_file.h"

void read_file(char* stroka, std::string file_name)
{
    std::ifstream fin(file_name);
    if (fin.is_open()) {
        std::cout << "���� ������ �������." << std::endl;
    }
    else {
        std::cout << "������ �������� �����.";
    }
    fin.getline(stroka, strlen(stroka));
    fin.close();
}
