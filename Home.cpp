#include "Home.h"

Home::Home(int numberHomeP, int countFrontDoorP, int countFloorP, int countApartmentP) : numberHome(
        numberHomeP), countFrontDoor(countFrontDoorP), countFloor(countFloorP), countApartment(countApartmentP) {

    allApartment = new Apartment[countApartmentP]{};

    for (int i {0}; i < countApartmentP; ++i) {
        // Высчитываем номер подъезда
        int numberFrontDoor = (i + 1 - 1) / (countApartmentP / countFrontDoorP) + 1;

        // Высчитываем номер этажа
        int numberFloor = (i % (countApartmentP / countFrontDoorP)) /
                (countApartmentP / countFrontDoorP / countFloorP) + 1;

        int randomArea = rand() % (60 - 30) + 30;

        allApartment[i] = Apartment(i + 1, numberFloor, numberFrontDoor, randomArea);
    }

    // Добавление дома в масива и увеличение счетчика
    arrayHome[++countHome] = this;

}

Home::Home () : Home(1, 1, 1, 1) {}

Home::~Home() {
    allApartment = nullptr;
    delete allApartment;
}

int Home::getNumberHome() const {
    return numberHome;
}

void Home::setNumberHome(int numberHome) {
    Home::numberHome = numberHome;
}

int Home::getCountFrontDoor() const {
    return countFrontDoor;
}

void Home::setCountFrontDoor(int countFrontDoor) {
    Home::countFrontDoor = countFrontDoor;
}

int Home::getCountFloor() const {
    return countFloor;
}

void Home::setCountFloor(int countFloor) {
    Home::countFloor = countFloor;
}

int Home::getCountApartment() const {
    return countApartment;
}

void Home::setCountApartment(int countApartment) {
    Home::countApartment = countApartment;
}

Home** Home::arrayHome = new Home*[255];
int Home::countHome {0};

