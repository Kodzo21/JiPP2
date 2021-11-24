//
// Created by rycze on 24.11.2021.
//

#ifndef JIPP2_SQUARE_H
#define JIPP2_SQUARE_H
#include <iostream>
#include <cmath>
#include "Figure.h"


using namespace std;

class Square : public Figure {
private:
    double side;
public:
    Square(const string &name, const string &colour, double side);
    double Area();
    double Perimeter();
};


#endif //JIPP2_SQUARE_H
