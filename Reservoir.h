//
// Created by greenwoodplusone on 10.06.2021.
//

#ifndef UNTITLED_RESERVOIR_H
#define UNTITLED_RESERVOIR_H


#include <cstdlib>
#include <iostream>

class Reservoir {
    std::string nameReservoir;
    int lengthReservoir;
    int widthReservoir;
    int depthReservoir;
    double coefficient;  // абстрактный коэффициент для расчета объема водоема
    std::string typeReservoir;
public:
    explicit Reservoir(std::string nameReservoir, int lengthReservoir, int widthReservoir, int depthReservoir);

    explicit Reservoir(std::string nameReservoir);

    explicit Reservoir(int lengthReservoir, int widthReservoir, int depthReservoir);

    std::string getNameReservoir() const;

    int getLengthReservoir() const;

    int getWidthReservoir() const;

    int getDepthReservoir() const;

    std::string getTypeReservoir() const;

    Reservoir& setNameReservoir(char *nameReservoir);

    Reservoir& setLengthReservoir(int lengthReservoir);

    Reservoir& setWidthReservoir(int widthReservoir);

    Reservoir& setDepthReservoir(int depthReservoir);

    // Определение объема водоема
    int volumeReservoir();

    // Определения площади водной поверхности
    int squareReservoir()const;

    Reservoir& printReservoir();

    Reservoir& areaComparison (Reservoir reservoirP);
};


#endif //UNTITLED_RESERVOIR_H
