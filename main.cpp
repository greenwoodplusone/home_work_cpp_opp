#include <iostream>
#include "Subscriber.h"
#include "PhoneBook.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    // ���������� ����� ���������� �����
    PhoneBook ph1 = PhoneBook();

    do {
        cout << "����:" << endl;
        cout << "1. �������� ������������" << endl;
        cout << "2. ������� ������������" << endl;
        cout << "3. ������� ���� �������������" << endl;
        cout << "4. ����� ������������ �� ���" << endl;
        cout << "5. ��������� ���������" << endl;

        cout << "�������� ����� ���� - ";
        int input;
        cin >> input;

        cout << endl;

        switch (input)
        {
            case 1:
                ph1.addName();
                break;
            case 2:
                cout << "������� id ������������ - ";
                int id;
                cin >> id;
                cout << endl;
                cout << "������������ " << (*(ph1.getName(id))).getName() << " " << (*(ph1.getName(id))).getFirstName() << " ������" << endl;
                ph1.deleteName(id);
                cout << endl;
                break;
            case 3:
                for (int i = 0; i < 255; i++) {
                    if (ph1.getName(i) != nullptr) {
                        cout << "������������ � " << i << endl;
                        (*(ph1.getName(i))).printSubscriber();
                        cout << endl;
                    }
                }
                break;
            case 4:
                {
                    cout << "������� ��� ������������ - ";
                    char* nameMain = new char[255];
                    cin >> nameMain; 

                    cout << endl;

                    cout << "������� ������� ������������ - ";
                    char* firstNameMain = new char[255];
                    cin >> firstNameMain;
                    cout << endl;

                    Subscriber* subscriber = ph1.searchName(nameMain, firstNameMain);

                    if (subscriber != nullptr) {
                        cout << "������ ������������: " << endl;
                        (*subscriber).printSubscriber();
                        cout << endl;
                    } else {
                        cout << "������������ �� ������!" << endl;
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
                cout << "������ �������������� ����� ����!" << endl;
                break;
        }
    } while (true);

    /*
    Subscriber sub1 = Subscriber("Ivan0", "Ivanov0", "Ivanovich0", 2741712, 2745962, 927947, "����������");
    cout << sub1.getName() << endl;
    sub1.printSubscriber();
    */

    return 0;
}
