//
// Created by rycze on 24.11.2021.
//

#include "Square.h"

Square::Square(const string &name, const string &colour, double side) : Figure(name, colour), side(side) {}

double Square::Area() {
    return side*side;
}

double Square::Perimeter() {
    return 4*side;
}
