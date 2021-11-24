//
// Created by rycze on 24.11.2021.
//

#include "../include/Circle.h"

Circle::Circle(double radius) : radius(radius) {}

double Circle::getArea() {
    return 3.14*radius*radius;
}
