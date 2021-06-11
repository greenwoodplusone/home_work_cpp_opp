#include "People.h"
#include "Home.h"

People::People(char *name, int age, int numberApartmentP = 0) : name(name), age(age), numberApartment{numberApartmentP} {}

People::People() : People(const_cast<char *>("Name"), 20, 0){}

People::~People() {
    name = nullptr;
    delete name;
}

People& People::setNumberApartment (int numberApartment) {
    this->numberApartment = numberApartment;
    return *this;
}

int People::getNumberApartment () {
    return numberApartment;
}

People& People::printPeople () {
    std::cout << name << " (" << age << " лет) проживает в квартире № " <<
              numberApartment << std::endl;

    return *this;
}

void People::addApartment (int numberHomeP, int numberApartmentP) {
    if (numberApartmentP > Home::arrayHome[numberHomeP]->getCountApartment()) {
        std::cout << "В данном доме нет такой квартиры!" << std::endl;
    } else {
        Home::arrayHome[numberHomeP]->addPeopleAllApartment(numberApartmentP, this);
        this->setNumberApartment(numberApartmentP);
    }
}



