//
// Created by greenwoodplusone on 07.06.2021.
//

#ifndef UNTITLED_PEOPLE_H
#define UNTITLED_PEOPLE_H


#include <iostream>

class People {
    char* name;
    int age;
    int numberApartment;
public:
    People(char *name, int age, int numberApartmentP = 0);

    People();

    ~People();

    People& setNumberApartment (int numberApartment);

    int getNumberApartment ();

    People& printPeople ();

    void addApartment (int numberHomeP, int numberApartmentP);

};


#endif //UNTITLED_PEOPLE_H
