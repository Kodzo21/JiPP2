
#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H

#include <iostream>
#include <cmath>
using namespace std;
class Vector {
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y) : x(x), y(y) {}

    double length();

    Vector operator+(const Vector &rhs) const;

    Vector &operator+=(const Vector &rhs);

    Vector operator-(const Vector &rhs) const;

    Vector operator!();

    Vector operator*(const Vector &rhs) const;

    Vector operator*(const double cons) const;

    bool operator==(const Vector &rhs) const;

    void print();

    friend Vector operator*(const double &lhs, const Vector &rhs);
};


#endif //JIPP2_VECTOR_H
