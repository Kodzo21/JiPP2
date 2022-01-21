
#ifndef JIPP2_MANAGER_H
#define JIPP2_MANAGER_H
#include "Worker.h"
#include <iostream>

using namespace std;

class Manager : public Worker{
private:
    string position ="Manager";
public:
    Manager(string name,string surname,int age,string gender,int salary,string country);

    void printData() override;
};


#endif //JIPP2_MANAGER_H
