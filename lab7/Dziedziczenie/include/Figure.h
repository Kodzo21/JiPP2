//
// Created by rycze on 24.11.2021.
//

#ifndef JIPP2_FIGURE_H
#define JIPP2_FIGURE_H
#include <iostream>

using namespace std;

class Figure {
protected:
    string name;
    string colour;
public:
    Figure(const string &name, const string &colour);
};


#endif //JIPP2_FIGURE_H
