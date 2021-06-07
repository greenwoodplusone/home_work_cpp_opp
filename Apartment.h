//
// Created by greenwoodplusone on 07.06.2021.
//

#ifndef UNTITLED_APARTMENT_H
#define UNTITLED_APARTMENT_H

#include <cstdlib>
#include "People.h"

class Apartment {
    int numberApartment;
    int numberFloor;
    int numberFrontDoor;
    int area;
    People *allPeople;
public:
    Apartment(int numberApartment, int numberFloor, int numberFrontDoor, int area)
            : numberApartment(numberApartment), numberFloor(numberFloor), numberFrontDoor(numberFrontDoor), area(area) {
        //allPeople = new People[10];
    }

    Apartment () : Apartment(1, 1, 1, 30) {}

    Apartment addPeople (People people) {
        allPeople[people.getNumberApartment()] = people;
        return *this;
    }

    Apartment printApartment (int numberApartment) {
        std::cout << numberFrontDoor << " подъезд " << numberFloor << " этаж" << std::endl;
        return *this;
    }
};


#endif //UNTITLED_APARTMENT_H
