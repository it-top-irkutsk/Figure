#ifndef POLYMORPH_SQUARE_H
#define POLYMORPH_SQUARE_H

#include "Figure.h"

using namespace std;

class Square : public Figure {
private:
    double _side;

public:
    Square(double side) : _side(side) {}

    double GetSide() const {
        return _side;
    }

    double GetArea() override {
        return _side * _side;
    }

    double GetPerimeter() override {
        return 4 * _side;
    }

};


#endif //POLYMORPH_SQUARE_H
