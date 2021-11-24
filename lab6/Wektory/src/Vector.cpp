#include "Vector.h"

double Vector::length() {
    return sqrt(x * x + y * y);
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}


Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector::Vector() {}

void Vector::print() {
    cout <<"[ "<< x << "\t" << y << " ]" << endl;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator!() {
    return {-x,-y};
}

Vector Vector::operator*(const Vector &rhs) const {
    return {x * rhs.x, y * rhs.y};
}

Vector Vector::operator*(const double cons) const {
    return {x*cons,y*cons};
}

bool Vector::operator==(const Vector &rhs) const {
    if(x == rhs.x && y == rhs.y)
        return true;
    else return false;
}

Vector operator*(const double &lhs, const Vector &rhs) {
    return {lhs * rhs.x, lhs*rhs.y};
}
