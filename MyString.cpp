#include "MyString.h"

MyString::MyString (int strLength) {
    str = new char[strLength] {NULL};
    this->strLength = strLength;

    std::cout << "Конструктор с установкой длины - " << this << std::endl;
    std::cout << std::endl;

    MyString::strCount++;
}

MyString::MyString () : MyString (80){
    std::cout << "Конструктор по умолчанию (делегировал) - " << this << std::endl;
    std::cout << std::endl;
}

MyString::MyString (char* strInput) : str {strInput} {
    strLength = strlen(str);
    std::cout << "Конструктор принимающий строку - " << this << std::endl;
    std::cout << std::endl;

    MyString::strCount++;
}

MyString::MyString (const MyString& strP) : str(strP.str), strLength(strP.strLength){
    std::cout << "Конструктор копирования объекта - " << &strP << std::endl;

    MyString::strCount++;
}

MyString::~MyString () {
    std::cout << "Уничтожен объект " << this << std::endl;
    std::cout << std::endl;
    str = nullptr;
    delete str;
}

MyString& MyString::addStr () {
    std::cout << "Введите строку: " << std::endl;
    std::cin.getline(str, strLength); // проверка на переполнение строки

    return *this;
}

MyString& MyString::printStr () {
    std::cout << str << std::endl;
    std::cout << "Выведена строка длиной " << strLength << " символов"<< std::endl;

    return *this;
}

char& MyString::operator[] (const int index)
{
    return str[index];
}

int MyString::operator()(char charP) {
    for (int i = 0; i < MyString::strLength; i++) {
        if (MyString::str[i] == charP) {
            return i;
        }
    }

    return -1;
}

MyString::operator int() {
    return strLength;
}