//
// Created by rycze on 21.01.2022.
//

#include <Manager.h>
#include <Employee.h>
#include "WorkersManager.h"

WorkersManager::WorkersManager() {
    ifstream file;
    string name,surname,gender,country,position;
    int age, salary;
    Worker* worker;
    file.open("dataBase.txt");
    if(file.is_open()){
        while(file>>name && file>>surname && file>>age && file>>gender && file>>position &&file>>salary && file>>country)
            if(position == "Manager")
                worker = new Manager(name,surname,age,gender,salary,country);
            else worker = new Employee(name, surname, age, gender, position, salary, country);

            workers.emplace_back(worker);
            delete worker;
    }
}


void WorkersManager::printWorkersList() {


}

void WorkersManager::addWorker(Worker worker) {

}
