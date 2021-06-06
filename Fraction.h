#include <iostream>

using namespace std;

#pragma once
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    void addition(int numeratorOne, int denominatorOne, int numeratorTwo, int denominatorTwo) {
        int factor = 1;
        int numerator, denominator;

        cout << numeratorOne << "/" << denominatorOne << " + " << numeratorTwo << "/" << denominatorTwo << " = ";

        numerator = numeratorOne * denominatorTwo + numeratorTwo * denominatorOne;
        denominator = denominatorOne * denominatorTwo;

        while (numerator % 2 == 0 && denominator % 2 == 0) {
            numerator /= 2;
            denominator /= 2;
        }

        cout << numerator << "/" << denominator << endl;
    }

    void subtraction(int numeratorOne, int denominatorOne, int numeratorTwo, int denominatorTwo) {
        int factor = 1;
        int numerator, denominator;

        cout << numeratorOne << "/" << denominatorOne << " - " << numeratorTwo << "/" << denominatorTwo << " = ";

        numerator = numeratorOne * denominatorTwo - numeratorTwo * denominatorOne;
        denominator = denominatorOne * denominatorTwo;

        while (numerator % 2 == 0 && denominator % 2 == 0) {
            numerator /= 2;
            denominator /= 2;
        }

        cout << numerator << "/" << denominator << endl;
    }

    void multiplication(int numeratorOne, int denominatorOne, int numeratorTwo, int denominatorTwo) {
        int factor = 1;
        int numerator, denominator;

        cout << numeratorOne << "/" << denominatorOne << " * " << numeratorTwo << "/" << denominatorTwo << " = ";

        numerator = numeratorOne * numeratorTwo;
        denominator = denominatorOne *  denominatorTwo;

        while (numerator % 2 == 0 && denominator % 2 == 0) {
            numerator /= 2;
            denominator /= 2;
        }

        cout << numerator << "/" << denominator << endl;
    }

    void division(int numeratorOne, int denominatorOne, int numeratorTwo, int denominatorTwo) {
        int factor = 1;
        int numerator, denominator;

        cout << numeratorOne << "/" << denominatorOne << " / " << numeratorTwo << "/" << denominatorTwo << " = ";

        numerator = numeratorOne * denominatorTwo;
        denominator = denominatorOne * numeratorTwo;

        while (numerator % 2 == 0 && denominator % 2 == 0) {
            numerator = numerator / 2;
            denominator = denominator / 2;
        }

        cout << numerator << "/" << denominator << endl;
    }
};
