

#include "../include/Kolo.h"

Kolo::Kolo(double promien) : promien(promien) {}

double Kolo::calcArea() {
    return 3.14*this->promien*this->promien;
}


