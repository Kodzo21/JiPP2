//
// Created by rycze on 21.01.2022.
//

#ifndef JIPP2_WORKER_H
#define JIPP2_WORKER_H

#include <string>

using namespace std;

class Worker {
protected:
    string name;
    string surname;
    int age;
    string gender;
    string country;
    int salary;
public:
    Worker();
    ~Worker();
    virtual void printData()=0;
};


#endif //JIPP2_WORKER_H
