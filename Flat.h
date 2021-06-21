//
// Created by 79279 on 21.06.2021.
//

#ifndef UNTITLED_FLAT_H
#define UNTITLED_FLAT_H


class Flat {
    float area;
    int price;
    int countRoom;
public:
    Flat(float area, int price, int countRoom);

    Flat();

    bool operator==(const Flat& flat) {
        return this->area == flat.area;
    }

    Flat& operator=(const Flat& flat) {
        if (this == &flat)
            return *this;

        this->area = flat.area;
        this->price = flat.price;
        this->countRoom = this->countRoom;

        return *this;
    }

    friend bool operator>(const Flat& flat1, const Flat flat2);
};


#endif //UNTITLED_FLAT_H
