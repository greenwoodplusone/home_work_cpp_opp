#ifndef UNTITLED_STRING_H
#define UNTITLED_STRING_H

#include <iostream>
#include <cstring>

class MyString {
    char* str;
    int strLength;
    static int strCount;

public:
    /**
     * ���������� ����������� ����� ������
     * @param strLength ����� ������
     */
    MyString (int strLength) {
        str = new char[strLength] {NULL};
        this->strLength = strLength;

        std::cout << "����������� � ���������� ����� - " << this << std::endl;
        std::cout << std::endl;

        MyString::strCount++;
    }

    /**
     * ���������� �� ���������, ���������� �� ���������� ���������� ����� ������
     */
    MyString () : MyString (80){
        std::cout << "����������� �� ��������� (�����������) - " << this << std::endl;
        std::cout << std::endl;
    }

    /**
     * ����������� ����������� ������
     * @param strInput ������������������ ������
     */
    MyString (char* strInput) : str {strInput} {
        strLength = strlen(str);
        std::cout << "����������� ����������� ������ - " << this << std::endl;
        std::cout << std::endl;

        MyString::strCount++;
    }

    /**
     * ����������
     */
    ~MyString () {
        std::cout << "��������� ������ " << this << std::endl;
        std::cout << std::endl;
        str = nullptr;
        delete str;
    }

    /**
     * ������ ������ � ������� � ������ �������
     * @return this
     */
    MyString& addStr () {
        std::cout << "������� ������: " << std::endl;
        std::cin.getline(str, strLength); // �������� �� ������������ ������

        return *this;
    }

    /**
     * ����� ������
     * @return this
     */
    MyString& printStr () {
        std::cout << str << std::endl;
        std::cout << "�������� ������ ������ " << strLength << " ��������"<< std::endl;
        return *this;
    }

    /**
     * ����� ���������� ��������� �����������
     */
    static void printStrCount () {
        std::cout << "����� ������� " << strCount << " �����"<< std::endl;
    }

};


#endif //UNTITLED_STRING_H
