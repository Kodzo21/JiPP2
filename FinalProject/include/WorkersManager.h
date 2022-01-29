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
    vector<Worker*> workers;
    int workersAmount=0;
    double averageSalary=0;
public:
    WorkersManager();
    ~WorkersManager();
    int getWorkersAmount() const;

    void printWorkersList();
    void addWorker(Worker *worker);
    void fireWorker(int index);
    void editWorker(int index);
    void findWorkerByName(string name);
    void promoteEmployee(int index);
    void demoteManager(int index);
    void updateData();
    void showStats();
    friend ostream& operator<<(ostream& os, const WorkersManager &workersManager);
};

#endif //JIPP2_WORKERSMANAGER_H
