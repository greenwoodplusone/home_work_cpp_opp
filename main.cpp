/*
Тема: Перегрузка операторов глобальными функциями,
дружественные функции, дружественная перегрузка, перегрузка ввода-вывода

Задание.
Создайте класс с именем Date для хранения даты (или
используйте ранее созданный).
В классе должна быть функция-член, которая увеличивает день на 1.
Напишите соответствующие конструкторы и функции-члены.
В классе должны быть перегружены операциии ++, -- ,
!=, ==, >, <, >>, <<, =, +=, -=, ().
Используйте обычную и дружественную перегрузку.
 */

#include <iostream>
#include <ctime>
#include "Date.h"

bool operator==(const Date& date1, const Date& date2) {
    return date1.getYear() == date2.getYear() &&
           date1.getMonth() == date2.getMonth() &&
           date1.getDay() == date2.getDay();
}

bool operator!=(const Date& date1, const Date& date2) {
    return !(date1 == date2);
}

bool operator>(const Date& date1, const Date& date2) {
    return date1.getYear() > date2.getYear() ||
    date1.getYear() == date2.getYear() && date1.getMonth() > date2.getMonth() ||
    date1.getYear() == date2.getYear() && date1.getMonth() == date2.getMonth() &&
    date1.getDay() > date2.getDay();
 }

bool operator<(const Date& date1, const Date& date2) {
    return !(date1 > date2);
}

ostream& operator<< (ostream& output, const Date& date)
{
    output << "Year : " << date.getYear() << ", " << "month : " << date.getMonth() << ", " <<
           "day : " << date.getDay() << endl;
    return output;
}

istream& operator>> (istream& input, Date& date)
{
    int year, month, day;

    cout << "Введите год: ";
    input >> year;
    date.setYear(year);

    cout << "Введите весяц: ";
    input >> month;
    if (month < 1 || month > 12) {
        month = 1;
    }
    date.setMonth(month);

    cout << "Введите день: ";
    input >> day;
    if (day < 1 || day > 31) {
        day = 1;
    }
    date.setDay(day);
    return input;
}

int main() {
    setlocale(LC_ALL, "");

    Date dateOne{ 2020, 12, 30 };
    dateOne.printDate();

    Date dateTwo = Date::addingWorkingDays(dateOne, 5);
    dateTwo.printDate();

    Date dateThree = Date::addingWorkingDays(dateOne, 50);
    dateThree.printDate();

    ++dateThree;
    dateThree.printDate();
    dateThree++;
    dateThree.printDate();

    --dateThree;
    dateThree.printDate();

    dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;
    dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;
    dateThree--;dateThree--;dateThree--;
    dateThree.printDate();

    dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;
    dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;
    dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;
    dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;dateThree--;
    dateThree.printDate();

    dateThree += 3;
    dateThree.printDate();

    dateThree -= 34;
    dateThree.printDate();

    dateThree = dateTwo;
    dateThree.printDate();

    Date dateFour {2021, 2, 4};
    cout << ((dateFour > dateThree) ? "true" : "false") << endl;
    cout << ((dateFour < dateThree) ? "true" : "false") << endl;

    cout << ((dateTwo == dateThree) ? "true" : "false") << endl;
    cout << ((dateTwo != dateThree) ? "true" : "false") << endl;

    dateFour();
    cout << dateFour;

    cin >> dateFour;
    cout << dateFour;

    return 0;
}
