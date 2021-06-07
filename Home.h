#ifndef UNTITLED_HOME_H
#define UNTITLED_HOME_H

#include <cstdlib>
#include "Apartment.h"

class Home {
    int numberHome; // 1
    int countFrontDoor; // 4
    int countFloor; // 4
    int countApartment; // 64
    Apartment* allApartment;
public:
    Home(int numberHome, int countFrontDoor, int countFloor, int countApartment) : numberHome(
            numberHome), countFrontDoor(countFrontDoor), countFloor(countFloor), countApartment(countApartment) {
        allApartment = new Apartment[countApartment];

        for (int i {0}; i < countApartment; ++i) {
            // Высчитываем номер подъезда
            int numberFrontDoor = (i + 1 - 1) / (countApartment / countFrontDoor) + 1;

            // Высчитываем номер этажа
            int numberFloor = ((i + 1) % numberFrontDoor + 1) / (countApartment / countFloor) + 1;

            int randomArea = rand() % 60 + 1;

            allApartment[i] = Apartment(i, numberFloor, numberFrontDoor, randomArea);
        }

    }

    //Home () : Home(1, 1, 1, 1) {}

    ~Home() {
        allApartment = nullptr;
        delete allApartment;
    }

    Home printHome () {
        std::cout << "Дом №" << numberHome << " (" << countFrontDoor
                  << " подъездов " << countFloor << " этажей " << countApartment << " квартир" << std::endl;
        return *this;
    }
};


#endif //UNTITLED_HOME_H
