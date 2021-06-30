//
// Created by 79279 on 30.06.2021.
//

#include <cstring>
#include "Parentheses.h"

const char Parentheses::searchSymbols[] = {'(', '[', '{'};
const char Parentheses::inverseSearchSymbols[] {')', ']', '}'};

Parentheses::Parentheses(const char* pText) {
    text = new char[strlen(pText)] {};
    stringWithBracketsOnly = new char[strlen(pText)];

    for (int i = 0; i < strlen(pText); i++) {
        text[i] = pText[i];

        // подсчет количества искомых символов
        for (int j = 0; j < countSearchSymbols; i++) {
            if (text[i] == searchSymbols[j] || text[i] == inverseSearchSymbols[j]) {
                stringWithBracketsOnly[countSearchSymbolsInString] = text[i];

                countSearchSymbolsInString++;
            }
        }

    }
    text[strlen(pText)] = '\0';
    stringWithBracketsOnly[countSearchSymbolsInString] = '\0';

    std::cout << strlen(text) << std::endl;
    std::cout << stringWithBracketsOnly << std::endl;
}

Parentheses::~Parentheses() {
    text = nullptr;
    delete[] text;
}

void Parentheses::rowIsTrue() {
    //Проверка на наличие в конце строки ';'
    if (text[strlen(text) - 1] != charRowEnd) {
        std::cout << "Строка не оканчивается на \';\'" << std::endl;
        return;
    }

    char* temp = new char[countSearchSymbolsInString];

    int i = 0; // искомый символ ([{

    for (int j = strlen(text) - 2; j >= 0; j--) {
        if (text[j] == searchSymbols[i]) {
            for (int k = j + 1; k < strlen(text) - 1; k++) {
                if (text[k] == inverseSearchSymbols[i]) {
                    break;
                }
            }
        }
    }
}
