//
// Created by greenwoodplusone on 07.06.2021.
//

#include "Apartment.h"

Apartment::Apartment(int numberApartmentP, int numberFloorP, int numberFrontDoorP, int areaP)
        : numberApartment(numberApartmentP), numberFloor(numberFloorP), numberFrontDoor(numberFrontDoorP), area(areaP) {
    allPeople = new People[10];
}

Apartment::Apartment () : Apartment(1, 1, 1, 30) {}

Apartment::~Apartment() {
    allPeople = nullptr;
    delete allPeople;
}
