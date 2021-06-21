/*
Тема: Введение в объектно-ориентированное программирование.

Задание.
Реализуйте класс Дробь. Необходимо хранить числитель
и знаменатель в качестве переменных-членов. Реализуйте
функции-члены для ввода данных в переменные-члены,
для выполнения арифметических операций (сложение,
вычитание, умножение, деление, и т.д.).
 */

#include <iostream>
#include "Fraction.h"

Fraction operator+(const Fraction& fraction1, const Fraction& fraction2) {
    int numerator, denominator;

    cout << fraction1.numerator << "/" << fraction1.denominator << " + " <<
         fraction2.numerator << "/" << fraction2.denominator << " = ";

    numerator = fraction1.numerator * fraction2.denominator + fraction2.numerator * fraction1.denominator;
    denominator = fraction1.denominator * fraction2.denominator;

    while (numerator % 2 == 0 && denominator % 2 == 0) {
        numerator /= 2;
        denominator /= 2;
    }

    cout << numerator << "/" << denominator << endl;

    return Fraction(numerator, denominator);
}

Fraction operator-(const Fraction& fraction1, const Fraction& fraction2) {
    int numerator, denominator;

    cout << fraction1.numerator << "/" << fraction1.denominator << " - " <<
         fraction2.numerator << "/" << fraction2.denominator << " = ";

    numerator = fraction1.numerator * fraction2.denominator - fraction2.numerator * fraction1.denominator;
    denominator = fraction1.denominator * fraction2.denominator;

    while (numerator % 2 == 0 && denominator % 2 == 0) {
        numerator /= 2;
        denominator /= 2;
    }

    cout << numerator << "/" << denominator << endl;

    return Fraction(numerator, denominator);
}

Fraction operator*(const Fraction& fraction1, const Fraction& fraction2) {
    int numerator, denominator;

    cout << fraction1.numerator << "/" << fraction1.denominator << " * " <<
         fraction2.numerator << "/" << fraction2.denominator << " = ";

    numerator = fraction1.numerator * fraction2.numerator;
    denominator = fraction1.denominator *  fraction2.denominator;

    while (numerator % 2 == 0 && denominator % 2 == 0) {
        numerator /= 2;
        denominator /= 2;
    }

    cout << numerator << "/" << denominator << endl;

    return Fraction(numerator, denominator);
}

Fraction operator/(const Fraction& fraction1, const Fraction& fraction2) {
    int numerator, denominator;

    cout << fraction1.numerator << "/" << fraction1.denominator << " / " <<
         fraction2.numerator << "/" << fraction2.denominator << " = ";

    numerator = fraction1.numerator * fraction2.denominator;
    denominator = fraction1.denominator * fraction2.numerator;

    while (numerator % 2 == 0 && denominator % 2 == 0) {
        numerator = numerator / 2;
        denominator = denominator / 2;
    }

    cout << numerator << "/" << denominator << endl;

    return Fraction(numerator, denominator);
}

int main()
{
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(3, 4);
    Fraction fraction3 = Fraction(5, 3);
    Fraction fraction4 = Fraction(7, 2);

    fraction1 + fraction2;
    fraction2 - fraction3;
    fraction3 * fraction4;
    fraction4 / fraction1;

}
