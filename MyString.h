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

    /**
     * Перегзка оператора [] — возвращает элемент по указанному индексу
     *
     * @param index индекс запрашиваемого символа в сторке
     * @return симовл из сторки
     */
    char& operator[] (const int index);

    /**
     * Перегрузка оператора () — ищет символ в строке, если символ есть возвращает индекс, если нет –1.
     *
     * @param charP Искомый символ
     * @return индекс первого найденного искомого символа
     */
    int operator()(char charP);

    /**
     * Перегрезка преобразования типа int
     *
     * @return длину строки
     */
    operator int();

};


#endif //UNTITLED_STRING_H