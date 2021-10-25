//
// Created by rycze on 25.10.2021.
//

#include "../include/Figura.h"
#include "../include/Punkt.h"

Figura::Figura(int liczbaWierzcholkow) : liczbaWierzcholkow(liczbaWierzcholkow){}

void Figura::dodajWierzcholek(Punkt p) {
    wierzcholki.push_back(p);
}
