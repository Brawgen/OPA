#include "lineconnection.h"

void lineconnection(std::string file_name)
{
    std::string stroka;
    bool flag = false;
    std::string stroki;
    std::ifstream fin(file_name);//�������� �����
    if (fin.is_open()) {//�������� �� ��������
        std::cout << "���� ������ �������." << std::endl;
    }
    else {
        std::cout << "������ �������� �����.";
        exit(0);
    }

    std::getline(fin, stroka);//��������� ������ ������

    for (int i = 0; i < stroka.size(); i++) {//����� �������� ������� ����������� ��� ����
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

    std::getline(fin, stroka);//��������� ������ ������

    if (flag == true) {//���������� ������
        std::cout <<"��������� ������>>" << stroki + stroka;
    }
    else {
        std::cout << "����� ������ ����.";
    }
    fin.close();//�������� �����
}
