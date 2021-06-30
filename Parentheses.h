//
// Created by 79279 on 30.06.2021.
//

#ifndef UNTITLED_PARENTHESES_H
#define UNTITLED_PARENTHESES_H

#include <iostream>

class Parentheses {
    char* text;
    char charRowEnd = ';';
    static const int countSearchSymbols = 3;
    static const char searchSymbols[countSearchSymbols];
    static const char inverseSearchSymbols[countSearchSymbols];
    int countSearchSymbolsInString = 0;
    char* stringWithBracketsOnly;

public:
    Parentheses(const char*);
    ~Parentheses();
    void rowIsTrue();
};


#endif //UNTITLED_PARENTHESES_H
