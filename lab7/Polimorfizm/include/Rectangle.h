//
// Created by rycze on 24.11.2021.
//

#ifndef JIPP2_RECTANGLE_H
#define JIPP2_RECTANGLE_H
#include <iostream>
#include "Figure.h"

using namespace std;

class Rectangle : public Figure{
private:
    double sideA,sideB;
public:
    Rectangle(double sideA, double sideB);
    double getArea();
};


#endif //JIPP2_RECTANGLE_H
