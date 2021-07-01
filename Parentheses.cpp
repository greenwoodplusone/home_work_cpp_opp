#include <cstring>
#include "Parentheses.h"

const char Parentheses::searchSymbols[] = {'(', '[', '{'};
const char Parentheses::inverseSearchSymbols[] {')', ']', '}'};

Parentheses::Parentheses(const char* pText) {
    //Изначально список пуст
    head = tail = NULL;

    for (int i = 0; i < strlen(pText); i++) {
        if (pText[i] != ';') {
            add(pText[i]);
        } else {
            break;
        }

        // подсчет количества искомых символов
        for (int j = 0; j < countSearchSymbols; j++) {
            if (pText[i] == searchSymbols[j] || pText[i] == inverseSearchSymbols[j]) {
                countSearchSymbolsInString++;
            }
        }

    }
}

Parentheses::~Parentheses() {
    //Вызов функции удаления списка
    delAll();
}

void Parentheses::rowIsTrue() {
    //перебираем каждый символ из массива скобок
    for (int i = 0; i < countSearchSymbols; i++) {

        //Проверка на идентичность головы и хвоста списка
        if (head->data == searchSymbols[i] && tail->data != inverseSearchSymbols[i]) {
            //запоминаем адрес головного элемента
            Node* temp = head;

            while(temp != tail)
            {
                std::cout << temp->data << "";
                temp = temp->next;
            }
            std::cout << "#error this place#" << std::endl;
            return;
        }
    }

    std::cout << head->data << "";

    //Проверка всего списка на соответствие (кроме головы и хвоста)
    Node* temp = head->next;

    // Символ текущей открывающей скобки с которым сравниваем остальные символы
    char inverseSymbol = NULL;

    while(temp->next != tail)
    {
        //Выводим данные
        std::cout << temp->data << "";

        for (int i = 0; i < countSearchSymbols; i++) {
            if (temp->data == searchSymbols[i]) {
                inverseSymbol = inverseSearchSymbols[i];
            }

            if (temp->next->data == inverseSymbol) {
                inverseSymbol = NULL;
                break;
            }

            for (int j = 0; j < countSearchSymbols; j++) {
                if (inverseSymbol && j == i && temp->next->data == searchSymbols[i]) {
                    std::cout << "#error this place#" << std::endl;
                    return;
                }

                if (inverseSymbol && (temp->next->data == searchSymbols[j] || temp->next->data == inverseSearchSymbols[j])) {
                    std::cout << "#error this place#" << std::endl;
                    return;
                }

                if (!inverseSymbol && temp->next->data == inverseSearchSymbols[j]) {
                    std::cout << "#error this place#" << std::endl;
                    return;
                }
            }
        }

        //Переходим на следующий элемент
        temp = temp->next;
    }

    std::cout << tail->data << ";" << std::endl;
}

int Parentheses::getCount() {
    //Возвращаем количество элементов
    return countSearchSymbolsInString;
}

void Parentheses::add(char data) {
    //создание нового элемента
    Node* temp = new Node;
    //заполнение данными
    temp->data = data;
    //следующий элемент отсутствует
    temp->next = NULL;
    //новый элемент становится последним элементом списка
    //если он не первый добавленный
    if(head!=NULL){
        tail->next=temp;
        tail = temp;
    }
        //новый элемент становится единственным
        //если он первый добавленный
    else{
        head = tail = temp;
    }
}

void Parentheses::del()
{
    //запоминаем адрес головного элемента
    Node* temp = head;
    //перебрасываем голову на следующий элемент
    head = head->next;
    //удаляем бывший головной элемент
    delete temp;
}

void Parentheses::delAll()
{
    //Пока еще есть элементы
    while(head != 0)
        //Удаляем элементы по одному
        del();
}

void Parentheses::print()
{
    //запоминаем адрес головного элемента
    Node* temp = head;
    //Пока еще есть элементы
    while(temp != 0)
    {
        //Выводим данные
        std::cout << temp->data << "";
        //Переходим на следующий элемент
        temp = temp->next;
    }
    std::cout << ';' << std::endl;
}
