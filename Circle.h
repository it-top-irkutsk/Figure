#ifndef POLYMORPH_CIRCLE_H
#define POLYMORPH_CIRCLE_H

#include "Figure.h"

using namespace std;

class Circle : public Figure {
private:
    const double PI = 3.14;

    double _radius;

public:
    Circle(double radius) : _radius(radius) {}

    const double GetPi() const {
        return PI;
    }

    double GetRadius() const {
        return _radius;
    }

    double GetArea() override {
        return PI * _radius *_radius;
    }

    double GetPerimeter() override {
        return 2 * PI * _radius;
    }

};


#endif //POLYMORPH_CIRCLE_H
