//
// Created by rycze on 24.11.2021.
//

#ifndef JIPP2_CIRCLE_H
#define JIPP2_CIRCLE_H
#include <iostream>
#include "Figure.h"

using namespace std;
class Circle : public Figure{
private:
    double radius;
public:
    Circle(const string &name, const string &colour, double radius);
    double Area();
    double Perimeter();
};


#endif //JIPP2_CIRCLE_H
