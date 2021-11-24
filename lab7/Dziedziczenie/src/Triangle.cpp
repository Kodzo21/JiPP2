//
// Created by rycze on 24.11.2021.
//

#include "Triangle.h"

Triangle::Triangle(const string &name, const string &colour, double sideA, double sideB, double sideC) : Figure(name,
                                                                                                                colour),
                                                                                                         sideA(sideA),
                                                                                                         sideB(sideB),
                                                                                                         sideC(sideC) {}

double Triangle::Area() {
    double p = 0.5*(sideA+sideB+sideC);
    return sqrt(p*((p-sideA)*(p-sideB)*(p-sideC)));
}

double Triangle::Perimeter() {
    return sideA+sideB+sideC;
}
