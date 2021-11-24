//
// Created by rycze on 24.11.2021.
//

#include "../include/Circle.h"



double Circle::Area() {
    return 3.14*radius*radius;
}

double Circle::Perimeter() {
    return 2*3.14*radius;
}

Circle::Circle(const string &name, const string &colour, double radius) : Figure(name, colour), radius(radius) {}


