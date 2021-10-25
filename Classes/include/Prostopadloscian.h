//
// Created by rycze on 25.10.2021.
//

#ifndef JIPP2_PROSTOPADLOSCIAN_H
#define JIPP2_PROSTOPADLOSCIAN_H

#include <iostream>

using namespace std;

class Prostopadloscian {
private:
    int dlugosc;
    int szerokosc;
    int wysokosc;
public:
    Prostopadloscian(int dlugosc, int szerokosc, int wysokosc);

    int obliczPP();
};


#endif //JIPP2_PROSTOPADLOSCIAN_H
