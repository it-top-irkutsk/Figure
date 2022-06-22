#include <iostream>

#include "Figure.h"
#include "Circle.h"
#include "Square.h"

#include "CLI.h"

using namespace std;

void PrintFigure(Figure* figure);

int main() {

    Figure* figure;

    CLI::PrintInfo("Выберите тип фигуры:" );
    CLI::PrintInfo("1 -> Круг" );
    CLI::PrintInfo("2 -> Квадрат" );

    string select;
    select = CLI::Input("Введите номер типа фигуры: ");
    if (select == "1") {
        double radius = stod(CLI::Input("Введите радиус - "));
        figure = new Circle(radius);
    } else if  (select == "2") {
        double side = stod(CLI::Input("Введите сторону - "));
        figure = new Square(side);
    } else {
        figure = nullptr;
    }

    PrintFigure(figure);

    return 0;
}

void PrintFigure(Figure* figure) {
    string str = "Perimeter = " + to_string(figure->GetPerimeter());
    CLI::PrintInfo(str);
    str = "Area = " + to_string(figure->GetArea());
    CLI::PrintInfo(str);
}