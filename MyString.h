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
     * Контруктор принимающий длину строки
     * @param strLength Длина строки
     */
    MyString (int strLength) {
        str = new char[strLength] {NULL};
        this->strLength = strLength;

        std::cout << "Конструктор с установкой длины - " << this << std::endl;
        std::cout << std::endl;

        MyString::strCount++;
    }

    /**
     * Контруктор по умолчанию, делегирует на контруктор принимющий длину строки
     */
    MyString () : MyString (80){
        std::cout << "Конструктор по умолчанию (делегировал) - " << this << std::endl;
        std::cout << std::endl;
    }

    /**
     * Конструктор принимающий строку
     * @param strInput инициализированная строка
     */
    MyString (char* strInput) : str {strInput} {
        strLength = strlen(str);
        std::cout << "Конструктор принимающий строку - " << this << std::endl;
        std::cout << std::endl;

        MyString::strCount++;
    }

    /**
     * Деструктор
     */
    ~MyString () {
        std::cout << "Уничтожен объект " << this << std::endl;
        std::cout << std::endl;
        str = nullptr;
        delete str;
    }

    /**
     * Запись строки с консоли в строку объекта
     * @return this
     */
    MyString& addStr () {
        std::cout << "Введите строку: " << std::endl;
        std::cin.getline(str, strLength); // проверка на переполнение строки

        return *this;
    }

    /**
     * Вывод строки
     * @return this
     */
    MyString& printStr () {
        std::cout << str << std::endl;
        std::cout << "Выведена строка длиной " << strLength << " символов"<< std::endl;
        return *this;
    }

    /**
     * Вывод количества созданных экземпляров
     */
    static void printStrCount () {
        std::cout << "Всего создано " << strCount << " строк"<< std::endl;
    }

};


#endif //UNTITLED_STRING_H
