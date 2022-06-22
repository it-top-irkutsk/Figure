#ifndef POLYMORPH_FIGURE_H
#define POLYMORPH_FIGURE_H

using namespace std;

class Figure {
public:
    virtual double GetArea() = 0;
    virtual double GetPerimeter() = 0;
};

#endif //POLYMORPH_FIGURE_H
