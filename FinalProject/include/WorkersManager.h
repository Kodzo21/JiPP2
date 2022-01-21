//
// Created by rycze on 21.01.2022.
//

#ifndef JIPP2_WORKERSMANAGER_H
#define JIPP2_WORKERSMANAGER_H
#include<string>
#include<sstream>
#include <iostream>
#include <vector>
#include <fstream>
#include "Worker.h"
using namespace std;

class WorkersManager {
private:
    vector<Worker> workers;
    fstream dataBase;
    int workersAmount=0;
    double genderRatio=0;
    double averageSalary=0;
public:
    WorkersManager();

    void printWorkersList();
    void addWorker(Worker worker);
    void addWorker(Worker worker,string position);
    void fireWorker(int index);
    void editWorker(int index);
    void findWorker(string name);
    void promoteEmployee(int index);
    void demoteManager(int index);
    void updateData();
    void showStats();
};


#endif //JIPP2_WORKERSMANAGER_H
