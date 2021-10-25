
#include <iostream>
#include "../include/FunkcjaKwadratowa.h"



void FunkcjaKwadratowa::printFunkcja() {
    std::cout << a <<" x^2 + " << b << " x + " << c << std::endl;
}

FunkcjaKwadratowa::FunkcjaKwadratowa(int a, int b, int c) : a(a), b(b), c(c) {}


