//
// Created by rycze on 21.01.2022.
//

#ifndef JIPP2_EMPLOYEE_H
#define JIPP2_EMPLOYEE_H


#include "Worker.h"
#include <iostream>
using namespace std;
class Employee : public Worker {
private:
    string position;
public:
    Employee(string name, string surname, int age,string gender, string position, int salary, string country);

    void printData() override;
};


#endif //JIPP2_EMPLOYEE_H
