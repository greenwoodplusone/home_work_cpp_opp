#ifndef UNTITLED_PARENTHESES_H
#define UNTITLED_PARENTHESES_H

#include <iostream>

struct Node
{
    char data;
    Node* next;
};

class Parentheses {
    char charRowEnd = ';';
    static const int countSearchSymbols = 3;
    static const char searchSymbols[countSearchSymbols];
    static const char inverseSearchSymbols[countSearchSymbols];
    int countSearchSymbolsInString = 0;

    Node* head;
    Node* tail;

public:
    Parentheses(const char*);
    ~Parentheses();
    void rowIsTrue();

    //Добавление элемента в список
    //(Новый элемент становится последним)
    void add(char data);
    //Удаление элемента списка
    //(Удаляется головной элемент)
    void del();
    //Удаление всего списка
    void delAll();
    //Распечатка содержимого списка
    //(Распечатка начинается с головного элемента)
    void print();
    //Получение количества элементов,
    //находящихся в списке
    int getCount();
};


#endif //UNTITLED_PARENTHESES_H
