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
public:
    People *allPeople;

    virtual ~Apartment();

    Apartment(int numberApartment, int numberFloor, int numberFrontDoor, int area);

    Apartment ();

    /*
    Apartment addPeople (People people) {
        allPeople[people.getNumberApartment()] = people;
        return *this;
    }
     */

    Apartment& printApartment () {
        std::cout << this->numberFrontDoor << " подъезд " << this->numberFloor << " этаж" << std::endl;
        return *this;
    }


    void setAllPeople(People *allPeople) {
        Apartment::allPeople = allPeople;
    }

};


#endif //UNTITLED_APARTMENT_H
