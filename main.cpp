/*
Тема: Конструкторы, деструкторы

Задание.
Создайте приложение "Телефонная книга". Необходимо
хранить данные об абоненте (ФИО, домашний телефон,
рабочий телефон, мобильный телефон, дополнительная
информация о контакте) внутри соответствующего класса. Наполните класс переменными-членами, функциями-членами, конструкторами, inline-функциями-членами,
используйте инициализаторы, реализуйте деструктор.
Обязательно необходимо выделять динамически память
под ФИО. Предоставьте пользователю возможность добавлять новых абонентов, удалять абонентов, искать абонентов по ФИО, показывать всех абонентов, сохранять
информацию в файл и загружать из файла.
 */

#include <iostream>
#include "Subscriber.h"
#include "PhoneBook.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    // Добавление новой телефонной книги
    PhoneBook ph1 = PhoneBook();

    do {
        cout << "Меню:" << endl;
        cout << "1. Добавить пользователя" << endl;
        cout << "2. Удалить пользователя" << endl;
        cout << "3. Вывести всех пользователей" << endl;
        cout << "4. Поиск пользователя по ФИО" << endl;
        cout << "5. Завершить программу" << endl;

        cout << "Выберите пункт меню - ";
        int input;
        cin >> input;

        cout << endl;

        switch (input)
        {
            case 1:
                ph1.addName();
                break;
            case 2:
                cout << "Введите id пользователя - ";
                int id;
                cin >> id;
                cout << endl;
                cout << "Пользователь " << (*(ph1.getName(id))).getName() << " " << (*(ph1.getName(id))).getFirstName() << " удален" << endl;
                ph1.deleteName(id);
                cout << endl;
                break;
            case 3:
                for (int i = 0; i < 255; i++) {
                    if (ph1.getName(i) != nullptr) {
                        cout << "Пользователь № " << i << endl;
                        (*(ph1.getName(i))).printSubscriber();
                        cout << endl;
                    }
                }
                break;
            case 4:
                {
                    cout << "Введите имя пользователя - ";
                    char* nameMain = new char[255];
                    cin >> nameMain; 

                    cout << endl;

                    cout << "Введите фамилию пользователя - ";
                    char* firstNameMain = new char[255];
                    cin >> firstNameMain;
                    cout << endl;

                    Subscriber* subscriber = ph1.searchName(nameMain, firstNameMain);

                    if (subscriber != nullptr) {
                        cout << "Найден пользователь: " << endl;
                        (*subscriber).printSubscriber();
                        cout << endl;
                    } else {
                        cout << "Пользователь не найден!" << endl;
                        cout << endl;
                    } 

                    nameMain = nullptr;
                    delete[] nameMain;
                    firstNameMain = nullptr;
                    delete[] firstNameMain;
                }
                
                break;
            case 5:
                return 0;
            default:
                cout << "Выбран несуществующий пункт меню!" << endl;
                break;
        }
    } while (true);

    /*
    Subscriber sub1 = Subscriber("Ivan0", "Ivanov0", "Ivanovich0", 2741712, 2745962, 927947, "Информация");
    cout << sub1.getName() << endl;
    sub1.printSubscriber();
    */

    return 0;
}
