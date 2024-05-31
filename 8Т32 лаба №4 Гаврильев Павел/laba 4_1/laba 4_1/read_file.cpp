#include "read_file.h"
#include "filesize.h"

void read_file(char* stroka, std::string file_name) {
    std::ifstream fin(file_name);
    if (fin.is_open()) {
        std::cout << "���� ������ �������." << std::endl;
        fin.getline(stroka, filesize("stdfile.txt"));
    }
    else {
        std::cout << "������ �������� �����.";
        exit(0);
    }
    fin.close();
}
