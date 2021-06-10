//
// Created by greenwoodplusone on 10.06.2021.
//

#include <iostream>
#include "Reservoir.h"

Reservoir::Reservoir(std::string nameReservoirP, int lengthReservoirP, int widthReservoirP, int depthReservoirP) : nameReservoir(
        nameReservoirP), lengthReservoir(lengthReservoirP), widthReservoir(widthReservoirP), depthReservoir(
        depthReservoirP) {
    coefficient = (rand() % (9 - 5) + 5)/10.0;

    int squareReservoir = lengthReservoirP * widthReservoirP;

    std::string arrayTypeReservoir[4] {"Море", "Озеро", "Пруд", "Бассейн"};

    if (squareReservoir <= 75) {
        typeReservoir = arrayTypeReservoir[3];
    } else if (squareReservoir > 75 && squareReservoir <= 625) {
        typeReservoir = arrayTypeReservoir[2];
    } else if (squareReservoir > 625 && squareReservoir <100000000) {
        typeReservoir = arrayTypeReservoir[1];
    } else {
        typeReservoir = arrayTypeReservoir[0];
    }
}

Reservoir::Reservoir(std::string nameReservoir) : Reservoir(nameReservoir, 100, 100, 10) {}

Reservoir::Reservoir(int lengthReservoir, int widthReservoir, int depthReservoir) :
        Reservoir("Common", lengthReservoir, widthReservoir, depthReservoir) {}

std::string Reservoir::getNameReservoir() const {
    return nameReservoir;
}

int Reservoir::getLengthReservoir() const {
    return lengthReservoir;
}

int Reservoir::getWidthReservoir() const {
    return widthReservoir;
}

int Reservoir::getDepthReservoir() const {
    return depthReservoir;
}

std::string Reservoir::getTypeReservoir() const {
    return typeReservoir;
}

Reservoir& Reservoir::setNameReservoir(char *nameReservoir) {
    Reservoir::nameReservoir = nameReservoir;
    return *this;
}

Reservoir& Reservoir::setLengthReservoir(int lengthReservoir) {
    Reservoir::lengthReservoir = lengthReservoir;
    return *this;
}

Reservoir& Reservoir::setWidthReservoir(int widthReservoir) {
    Reservoir::widthReservoir = widthReservoir;
    return *this;
}

Reservoir& Reservoir::setDepthReservoir(int depthReservoir) {
    Reservoir::depthReservoir = depthReservoir;
    return *this;
}

int Reservoir::volumeReservoir() {
    return (int)(this->lengthReservoir * this->widthReservoir * this->depthReservoir * (double)coefficient);
}

int Reservoir::squareReservoir()const {
    return this->lengthReservoir * this->widthReservoir;
}

Reservoir& Reservoir::printReservoir() {
    std::cout << "Водоем " << this->getNameReservoir() <<
              ", объем: " << this->volumeReservoir() <<
              ", площадь поверхности: " << this->squareReservoir() <<
              ", тип: " << this->getTypeReservoir();
    return *this;
}

Reservoir& Reservoir::areaComparison (Reservoir reservoirP) {
    if (this->getTypeReservoir() == reservoirP.getTypeReservoir()) {
        std::cout << "Водоем " << this->getNameReservoir() <<
                  ((this->squareReservoir() > reservoirP.squareReservoir()) ? " больше" : " меньше") <<
                  " водоема " << reservoirP.getNameReservoir() <<
                  " на " << abs(this->squareReservoir() - reservoirP.squareReservoir());
    } else {
        std::cout << "Водоем " << this->getNameReservoir() << " и " <<
                  reservoirP.getNameReservoir() << " разного типа!";
    }
    return *this;
}

