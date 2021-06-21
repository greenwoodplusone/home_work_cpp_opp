#include <iostream>

using namespace std;

#pragma once
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator);

    Fraction();

    friend Fraction operator+(const Fraction& fraction1, const Fraction& fraction2);

    friend Fraction operator-(const Fraction& fraction1, const Fraction& fraction2);

    friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2);

    friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2);
};
