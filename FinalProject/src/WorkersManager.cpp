//
// Created by rycze on 21.01.2022.
//

#include <Manager.h>
#include <Employee.h>
#include "WorkersManager.h"

WorkersManager::WorkersManager() {
    ifstream file;
    string line;
    stringstream s;
    string name,surname,country,position;
    int id, age, salary;
    Worker* worker;
    cout<<workers.size()<<endl;
    file.open("dataBase.txt");
    if(file.is_open()){
        while(file >> name && file>>surname && file>>age && file>>position && file>>salary && file>>country) {
            if (position == "Manager")
                worker = new Manager(name, surname, age, salary, country);
            else worker = new Employee(name, surname, age, position, salary, country);

            workers.emplace_back(worker);
            workersAmount++;
        }
    }
    file.close();
}

void WorkersManager::printWorkersList() {
    int id=1;
    for (auto it =begin(workers);it!=end(workers);it++){
        cout<<"ID:"<<id<<" ";
        (*it)->printData();
        id++;
    }
}

void WorkersManager::addWorker(Worker *worker) {
//    ofstream file;
//    file.open("dataBase.txt");
//
//    file.close();
    workers.push_back(worker);
    cout<<workers.size()<<endl;
    workersAmount++;
}

void WorkersManager::addWorker(Worker *worker,string position) {
    ofstream file;
    file.open("dataBase.txt");
    file.close();
    workers.push_back(worker);

    workersAmount++;
}

void WorkersManager::fireWorker(int index) {
    delete workers[index];
    workers.erase(workers.begin()+index);
}

void WorkersManager::editWorker(int index) {

}

void WorkersManager::findWorkerByName(string name) {
    cout<<"Znalezieni pracownicy:"<<endl;
    int id=1;
    for (auto it =begin(workers);it!=end(workers);it++){
        if((*it)->getName()==name){
            cout<<"ID:"<<id<<" ";
            (*it)->printData();
        }
        id++;
    }
}

void WorkersManager::promoteEmployee(int index) {
    if(workers[index]->getPosition()=="Manager"){
        cout<<"Manager jest juz najwyzszym szczeblem kariery"<<endl;
    }else{
        workers[index]->setPosition("Manager");
        cout<<"Pracownik zostal awansowany na Managera"<<endl;
    };
}

void WorkersManager::demoteManager(int index) {
    string newPosition;
    if(workers[index]->getPosition()=="Manager"){
        cout<<"Podaj nowe stanowisko:"<<endl;
        cin>>newPosition;
        workers[index]->setPosition(newPosition);
        cout<<"Manager zostal zdegradowany do funkcji:"<<newPosition<<endl;
    }else{
        cout<<"Pracownik nie jest Managerem"<<endl;
        cout<<"Uzyj funkcji zwalniania pracownika"<<endl;
    }
}

void WorkersManager::updateData() {
    double averageSalary = 0;
    int workersAmount = 0;
    workers.shrink_to_fit();
    for (auto it = begin(workers); it != end(workers); it++){
        averageSalary += (*it)->getSalary();
        workersAmount++;
    }
    this->workersAmount = workersAmount;
    this->averageSalary = (averageSalary/workersAmount);
}

void WorkersManager::showStats() {
    cout<<"Aktualne statystyki: "<<endl;
    cout<<"Ilosc pracownikow - "<<workersAmount<<endl;
    cout<<"Srednia pensja - "<<averageSalary<<endl;
}

int WorkersManager::getWorkersAmount() const {
    return workersAmount;
}
