//
// Created by rycze on 25.10.2021.
//

#ifndef JIPP2_FIGURA_H
#define JIPP2_FIGURA_H

#include <vector>
#include "Punkt.h"
using namespace std;
class Figura {
public:
    int liczbaWierzcholkow;
    vector<Punkt> wierzcholki;

    Figura(int liczbaWierzcholkow);
    void dodajWierzcholek(Punkt);
};


#endif //JIPP2_FIGURA_H
