#include "rec_file.h"

void rec_file(std::string stroka, std::string file_name)
{
    std::ofstream fout(file_name);
    fout << stroka;
    fout.close();
}
