#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

#include <iostream>

using namespace std;

// Создаем класс дата
class Date {
    int year;
    int month;
    int day;
public:
    Date(int year, int month, int day);

    int getYear() const;

    int getMonth() const;

    int getDay() const;

    void setYear(int year);

    void setMonth(int month);

    void setDay(int day);

    // проверка на високосность года
    static bool leapYear(int year) {
        bool leapYear;

        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        {
            leapYear = true;
        }
        else
        {
            leapYear = false;
        }

        return leapYear;
    }

    // Определение выходного дня
    static bool dayOfWeek(int day, int month, int year) {
        int a, y, m, R;
        a = (14 - month) / 12;
        y = year - a;
        m = month + 12 * a - 2;
        R = 7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
        int x = R % 7;

        return x == 0 || x == 6;
    }

    // Прибавление дней к дате
    static Date addingWorkingDays(Date date, int addDays) {
        int year = date.year;
        int month = date.month;
        int day = date.day;

        // перебираем каждый рабочий день который необходимо добавить
        for (int i = 0; i < addDays; i++) {

            // проверка на колличество дней в месяце
            int dayInMonth;

            switch (month) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    dayInMonth = 31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    dayInMonth = 30;
                    break;
                case 2:
                    dayInMonth = Date::leapYear(year) ? 29 : 28;
                    break;
            }

            // Проверка на превышение дней в месяце
            if (day < dayInMonth) {
                day++;

                /*
                // Если день выходной не учитываем его как рабочий
                if (dayOfWeek(day, month, year)) {
                    i--;
                }
                 */
            }
            else {
                day = 1;
                month++;

                /*
                // Если день выходной не учитываем его как рабочий
                if (dayOfWeek(day, month, year)) {
                    i--;
                }
                 */
            }

            // Проверка перехода на следующий год
            if (month > 12) {
                year++;
                month = 1;
            }
        }

        return Date{ year, month, day };
    }

    // Убавление дней у даты
    static Date deleteWorkingDays(Date date, int addDays) {
        int year = date.year;
        int month = date.month;
        int day = date.day;

        // перебираем каждый день который необходимо удалить
        for (int i = 0; i < addDays; i++) {

            // Проверка на превышение дней в месяце
            if (day > 1) {
                day--;

                /*
                // Если день выходной не учитываем его как рабочий
                if (dayOfWeek(day, month, year)) {
                    i--;
                }
                 */
            }
            else {
                month--;

                // Проверка перехода на следующий год
                if (month < 1) {
                    year--;
                    month = 12;
                }

                // проверка на колличество дней в месяце
                int dayInMonth;

                switch (month) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        dayInMonth = 31;
                        break;
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        dayInMonth = 30;
                        break;
                    case 2:
                        dayInMonth = Date::leapYear(year) ? 29 : 28;
                        break;
                }

                day = dayInMonth;

                /*
                // Если день выходной не учитываем его как рабочий
                if (dayOfWeek(day, month, year)) {
                    i--;
                }
                 */
            }

        }

        return Date{ year, month, day };
    }

    friend bool operator==(const Date& date1, const Date& date2);

    friend bool operator!=(const Date& date1, const Date& date2);

    friend bool operator>(const Date& date1, const Date& date2);

    friend bool operator<(const Date& date1, const Date& date2);


    // Перегрузка оператора вызова
    void operator()();

    // Перегрузка инкремента (версия постфикс)
    Date& operator++(int);

    // Перегрузка инкремента (версия префикс)
    Date& operator++();

    // Перегрузка декремента  (версия постфикс)
    Date& operator--(int);

    // Перегрузка декремента  (версия префикс)
    Date& operator--();

    // Перегрузка +=
    Date& operator+=(int number);

    // Перегрузка -=
    Date& operator-=(int number);

    // Перегрузка оператора присваивания
    Date operator=(const Date& date);

    // Вывод даты
    Date& printDate();

    // Перегрузка оператора вывода
    friend ostream& operator<< (ostream& output, const Date& date);

    // Перегрузка оператора ввода
    friend istream& operator>> (istream& input, Date& date);
};


#endif //UNTITLED_DATE_H
