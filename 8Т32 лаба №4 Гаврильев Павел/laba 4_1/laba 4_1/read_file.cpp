#include "read_file.h"
#include "filesize.h"

void read_file(char* stroka, std::string file_name) {
    std::ifstream fin(file_name);
    if (fin.is_open()) {
        std::cout << "Файл открыт успешно." << std::endl;
        fin.getline(stroka, filesize("stdfile.txt"));
    }
    else {
        std::cout << "Ошибка открытия файла.";
        exit(0);
    }
    fin.close();
}
