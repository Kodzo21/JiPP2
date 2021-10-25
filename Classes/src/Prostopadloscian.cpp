#include "../include/Prostopadloscian.h"



    int Prostopadloscian::obliczPP() {
        return this->dlugosc * this->szerokosc * this->wysokosc;
    }

Prostopadloscian::Prostopadloscian(int dlugosc, int szerokosc, int wysokosc) : dlugosc(dlugosc), szerokosc(szerokosc),
                                                                               wysokosc(wysokosc) {}


