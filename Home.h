#ifndef UNTITLED_HOME_H
#define UNTITLED_HOME_H

#include "iostream"
#include <cstdlib>
#include "Apartment.h"

class Home {
    int numberHome; // 1
    int countFrontDoor; // 4
    int countFloor; // 4
    int countApartment; // 64
    Apartment** allApartment;

    // Создание массива с данными домов
    static Home** arrayHome;
    static int countHome;

public:

    Home(int numberHomeP, int countFrontDoorP, int countFloorP, int countApartmentP) : numberHome(
            numberHomeP), countFrontDoor(countFrontDoorP), countFloor(countFloorP), countApartment(countApartmentP) {

        allApartment = new Apartment*[countApartmentP]{};

        for (int i {0}; i < countApartmentP; ++i) {
            // Высчитываем номер подъезда
            int numberFrontDoor = (i + 1 - 1) / (countApartmentP / countFrontDoorP) + 1;

            // Высчитываем номер этажа
            int numberFloor = ((i + 1) % numberFrontDoor + 1) / (countApartmentP / countFloorP) + 1;

            int randomArea = rand() % 60 + 1;

            allApartment[i] = &Apartment(i, numberFloor, numberFrontDoor, randomArea);
        }


        // УДобавление дома в масива и увеличение счетчика
        arrayHome[countHome++] = this;

    }

    //Home () : Home(1, 1, 1, 1) {}

    /*
    ~Home() {
        allApartment = nullptr;
        delete allApartment;
    }
     */

    Home& printHome () {
        std::cout << "Дом №" << getNumberHome() << " (" << getCountFrontDoor()
                  << " подъезда, " << getCountFloor() << " этажей, " << getCountApartment() << " квартир)" << std::endl;
        return *this;
    }

    /*
    Home& addPeopleAllApartment(int numberApartmentP, People* peopleP) {
        allApartment[numberApartmentP].setAllPeople(peopleP);
        return *this;
    }
     */

    int getNumberHome() const {
        return numberHome;
    }

    void setNumberHome(int numberHome) {
        Home::numberHome = numberHome;
    }

    int getCountFrontDoor() const {
        return countFrontDoor;
    }

    void setCountFrontDoor(int countFrontDoor) {
        Home::countFrontDoor = countFrontDoor;
    }

    int getCountFloor() const {
        return countFloor;
    }

    void setCountFloor(int countFloor) {
        Home::countFloor = countFloor;
    }

    int getCountApartment() const {
        return countApartment;
    }

    void setCountApartment(int countApartment) {
        Home::countApartment = countApartment;
    }
};



#endif //UNTITLED_HOME_H
