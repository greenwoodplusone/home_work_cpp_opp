#ifndef UNTITLED_STRING_H
#define UNTITLED_STRING_H

#include <iostream>
#include <cstring>

class MyString {
    char* str;
    int strLength;
public:
    static int strCount;

    /**
     * Контруктор принимающий длину строки
     * @param strLength Длина строки
     */
    MyString (int strLength);

    /**
     * Контруктор по умолчанию, делегирует на контруктор принимющий длину строки
     */
    MyString ();

    /**
     * Конструктор принимающий строку
     * @param strInput инициализированная строка
     */
    MyString (char* strInput);

    /**
     * Конструктор копирования
     *
     * @param str объект для копирования
     */
    MyString (const MyString& strP);

    /**
     * Деструктор
     */
    ~MyString ();

    /**
     * Запись строки с консоли в строку объекта
     * @return this
     */
    MyString& addStr ();

    /**
     * Вывод строки
     * @return this
     */
    MyString& printStr ();

    /**
    * Вывод количества созданных экземпляров
    */
    static void printStrCount () {
        std::cout << "Всего создано " << strCount << " строк"<< std::endl;
    }

};


#endif //UNTITLED_STRING_H