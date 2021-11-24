//
// Created by rycze on 24.11.2021.
//

#include "../include/Rectangle.h"

Rectangle::Rectangle(double sideA, double sideB) : sideA(sideA), sideB(sideB) {}

double Rectangle::getArea() {
    return sideA*sideB;
}
