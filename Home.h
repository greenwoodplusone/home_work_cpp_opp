#ifndef UNTITLED_HOME_H
#define UNTITLED_HOME_H

#include "iostream"
#include "Apartment.h"
#include <cstdlib>

class Home {
    int numberHome; // 1
    int countFrontDoor; // 4
    int countFloor; // 5
    int countApartment; // 80
public:
    // Создание массива с данными домов
    static Home** arrayHome;
    static int countHome;

    Apartment* allApartment;

    Home(int numberHomeP, int countFrontDoorP, int countFloorP, int countApartmentP);

    Home ();

    ~Home();

    Home& printHome () {
        std::cout << "Дом №" << this->getNumberHome() << " (" << this->getCountFrontDoor() <<
                  " подъезда, " << this->getCountFloor() <<
                  " этажей, " << this->getCountApartment() << " квартир)" << std::endl;
        return *this;
    }


    Home& addPeopleAllApartment(int numberApartmentP, People* peopleP) {
        allApartment[numberApartmentP].setAllPeople(peopleP);
        return *this;
    }


    int getNumberHome() const;

    void setNumberHome(int numberHome);

    int getCountFrontDoor() const;

    void setCountFrontDoor(int countFrontDoor);

    int getCountFloor() const;

    void setCountFloor(int countFloor);

    int getCountApartment() const;

    void setCountApartment(int countApartment);
};



#endif //UNTITLED_HOME_H
