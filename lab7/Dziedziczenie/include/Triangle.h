

#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H
#include <iostream>
#include "Figure.h"

using namespace std;

class Triangle : public Figure{
private:
    double sideA,sideB,sideC;
public:
    Triangle(const string &name, const string &colour, double sideA, double sideB, double sideC);
    double Area();
    double Perimeter();
};


#endif //JIPP2_TRIANGLE_H
