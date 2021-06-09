//
// Created by greenwoodplusone on 07.06.2021.
//

#ifndef UNTITLED_PEOPLE_H
#define UNTITLED_PEOPLE_H


#include <iostream>
#include "Apartment.h"
#include "Home.h"

class People {
    char* name;
    int age;
    int numberApartment;
public:
    People(char *name, int age, int numberApartment = 0) : name(name), age(age), numberApartment{numberApartment} {}

    ~People() {
        name = nullptr;
        delete name;
    }

    People& setNumberApartment (int numberApartment) {
        this->numberApartment = numberApartment;
        return *this;
    }

    int getNumberApartment () {
        return numberApartment;
    }

    People& printPeople () {
        std::cout << name << " (" << age << " лет) проживает в квартире № " <<
                  numberApartment << std::endl;

        return *this;
    }

    /*
    void addApartment (int numberHomeP, int numberApartmentP) {
        if (numberApartmentP > Home::arrayHome[numberHomeP].getCountApartment()) {
            std::cout << "В данном доме нет такой квартиры!" << std::endl;
        } else {
            Home::arrayHome[numberHomeP].addPeopleAllApartment(numberApartmentP, this);
        }
    }
    */
};


#endif //UNTITLED_PEOPLE_H
