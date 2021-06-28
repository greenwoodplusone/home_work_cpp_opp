#include "Date.h"

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date& Date::operator++(int) {
    Date temp_return {this->year, this->month, this->day};

    Date temp = addingWorkingDays(*this, 1);
    this->year = temp.year;
    this->month = temp.month;
    this->day = temp.day;

    return temp_return;
}

Date& Date::operator++() {
    Date temp = addingWorkingDays(*this, 1);
    this->year = temp.year;
    this->month = temp.month;
    this->day = temp.day;

    return *this;
}

Date& Date::operator--(int) {
    Date temp_return {this->year, this->month, this->day};

    Date temp = deleteWorkingDays(*this, 1);
    this->year = temp.year;
    this->month = temp.month;
    this->day = temp.day;

    return temp_return;
}

Date& Date::operator--() {
    Date temp = deleteWorkingDays(*this, 1);
    this->year = temp.year;
    this->month = temp.month;
    this->day = temp.day;

    return *this;
}

Date& Date::operator+=(int number) {
    Date temp = addingWorkingDays(*this, number);
    this->year = temp.year;
    this->month = temp.month;
    this->day = temp.day;

    return *this;
}

Date& Date::operator-=(int number) {
    Date temp = deleteWorkingDays(*this, number);
    this->year = temp.year;
    this->month = temp.month;
    this->day = temp.day;

    return *this;
}

Date Date::operator=(const Date& date) {

    // обходим самокопирование
    if (this == &date)
        return *this;

    int year, month, day;
    this->year = date.year;
    this->month = date.month;
    this->day = date.day;

    return *this;
}

Date& Date::printDate() {
    cout << "Year : " << year << ", " << "month : " << month << ", " << "day : " << day << endl;
    return *this;
}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

void Date::operator()() {
    int year = this->year;
    int month = this->month;
    int day = this->day;

    int countDay = 0;

    // перебираем каждый год, месяц, день пока дата не будет равна 0001, 01, 1
    while (!(year == 1 && month == 1 && day == 1)) {

        // Проверка на превышение дней в месяце
        if (day > 1) {
            day--;
        } else {
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
                    dayInMonth = leapYear(year) ? 29 : 28;
                    break;
            }

            day = dayInMonth;

        }

        countDay++;

    }

    countDay++;

    cout << "Прошло " << countDay << " дней нашей эры." << endl;
}

void Date::setYear(int year) {
    Date::year = year;
}

void Date::setMonth(int month) {
    Date::month = month;
}

void Date::setDay(int day) {
    Date::day = day;
}
