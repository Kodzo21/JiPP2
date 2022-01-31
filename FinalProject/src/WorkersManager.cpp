
#include <Manager.h>
#include <Employee.h>
#include "WorkersManager.h"

WorkersManager::WorkersManager() {
    ifstream file;
    string line;
    string name, surname, country, position;
    int age, salary;
    Worker *worker;
    file.open("dataBase.txt");
    if (file.is_open()) {
        while (file >> name && file >> surname && file >> age && file >> position && file >> salary &&
               file >> country) {
            if (position == "Manager")
                worker = new Manager(name, surname, age, salary, country);
            else worker = new Employee(name, surname, age, position, salary, country);

            workers.push_back(worker);
            workersAmount++;
        }
    } else {
        cout << "Blad otwarcia pliku - nie wczytano danych" << endl;
    }
    file.close();
}

void WorkersManager::printWorkersList() {
    int id = 1;
    for (auto it = begin(workers); it != end(workers); it++) {
        cout << "ID:" << id << " ";
        (*it)->printData();
        id++;
    }
}

void WorkersManager::addWorker(Worker *worker) {
    workers.push_back(worker);
    cout << workers.size() << endl;
    workersAmount++;
}

void WorkersManager::fireWorker(int index) {
    if (index <= workersAmount && index > 0) {
        index--;
        delete workers[index];
        workers.erase(workers.begin() + (index));
        workersAmount--;
        cout << "Pracownik zostal zwolniony" << endl;
    } else cout << "Nie ma az tylu pracownikow" << endl;
}

void WorkersManager::editWorker(int index) {
    if (index <= workersAmount && index > 0) {
        index--;
        bool flag = true;
        int choice;
        string word;
        int number;
        while (flag) {
            cout << "Co chcesz edytowac?" << endl;
            cout << "1 - imie i nazwisko" << endl;
            cout << "2 - wiek" << endl;
            cout << "3 - stanowisko" << endl;
            cout << "4 - wynagrodzenie" << endl;
            cout << "5 - kraj" << endl;
            cout << "0 - zakoncz edycje" << endl;
            cinInput(choice);
            switch (choice) {
                case 0: {
                    flag = false;
                    cout << "Zakonczono edycje pracownikow" << endl;
                    break;
                }
                case 1: {
                    cout << "Obecne imie i nazwisko:" << workers[index]->getName() << " "
                         << workers[index]->getSurname() << endl;
                    cout << "Podaj nowe imie:";
                    cinInput(word);
                    workers[index]->setName(word);
                    cout << "Podaj nowe nazwisko:";
                    cinInput(word);
                    workers[index]->setSurname(word);
                    cout << "Nowe imie i nazwisko:" << workers[index]->getName() << " " << workers[index]->getSurname()
                         << endl;
                    break;
                }
                case 2: {
                    cout << "Obecny wiek:" << workers[index]->getAge() << endl;
                    cout << "Podaj nowy wiek:";
                    cinInput(number);
                    workers[index]->setAge(number);
                    cout << "Nowy wiek:" << workers[index]->getAge() << endl;
                    break;
                }
                case 3: {
                    if (workers[index]->getPosition() == "Manager") {
                        cout << "Nie mozna edytowac stanowiska managera" << endl;
                        break;
                    }
                    cout << "Obecne stanowisko:" << workers[index]->getPosition() << endl;
                    cout << "Podaj nowe stanowisko:";
                    cinInput(word);
                    workers[index]->setPosition(word);
                    cout << "Nowe stanowisko:" << workers[index]->getPosition() << endl;
                    break;
                }
                case 4: {
                    cout << "Obecne wynagrodzenie:" << workers[index]->getSalary() << endl;
                    cout << "Podaj nowe wynagrodzenie:";
                    cinInput(number);
                    workers[index]->setSalary(number);
                    cout << "Nowe wynagrodzenie:" << workers[index]->getSalary() << endl;
                    break;
                }
                case 5: {
                    cout << "Obecny kraj pochodzenia:" << workers[index]->getCountry() << endl;
                    cout << "Podaj nowy kraj:";
                    cinInput(word);
                    workers[index]->setCountry(word);
                    cout << "Nowy kraj pochodzenia:" << workers[index]->getCountry() << endl;
                    break;
                }
            }
        }
    } else cout << "Zly numer pracownika";
}

void WorkersManager::findWorkerByName(string name) {
    cout << "Znalezieni pracownicy:" << endl;
    int id = 1;
    for (auto it = begin(workers); it != end(workers); it++) {
        if ((*it)->getName() == name) {
            cout << "ID:" << id << " ";
            (*it)->printData();
        }
        id++;
    }
}

void WorkersManager::promoteEmployee(int index) {
    if (index <= workersAmount && index > 0) {
        index--;
        int newSalary;
        if (workers[index]->getPosition() == "Manager") {
            cout << "Manager jest juz najwyzszym szczeblem kariery" << endl;
        } else {
            cout << "Podaj nowa wartosc wynagrodzenia:";
            cinInput(newSalary);
            workers[index]->setSalary(newSalary);
            workers[index]->setPosition("Manager");
            cout << "Pracownik zostal awansowany na Managera" << endl;
        }
    } else cout << "Nie ma az tylu pracownikow" << endl;
}

void WorkersManager::demoteManager(int index) {
    if (index <= workersAmount && index > 0) {
        index--;
        string newPosition;
        int newSalary;
        if (workers[index]->getPosition() == "Manager") {
            cout << "Podaj nowe stanowisko:" << endl;
            cinInput(newPosition);
            if (newPosition != "Manager") {
                cout << "Podaj nowa wartosc wynagrodzenia:";
                cinInput(newSalary);
                workers[index]->setSalary(newSalary);
                workers[index]->setPosition(newPosition);
                cout << "Manager zostal zdegradowany do stanowiska:" << newPosition << endl;
            } else cout << "Podano to samo stanowisko" << endl;
        } else {
            cout << "Pracownik nie jest Managerem" << endl;
            cout << "Uzyj funkcji edycji" << endl;
        }
    } else cout << "Nie ma az tylu pracownikow" << endl;
}

void WorkersManager::updateData() {
    double averageSalary = 0;
    int workersAmount = 0;
    for (auto it = begin(workers); it != end(workers); it++) {
        averageSalary += (*it)->getSalary();
        workersAmount++;
    }
    this->workersAmount = workersAmount;
    if (workersAmount != 0)
        this->averageSalary = (averageSalary / workersAmount);
}

void WorkersManager::showStats() {
    cout << "Aktualne statystyki: " << endl;
    cout << "Ilosc pracownikow - " << workersAmount << endl;
    cout << "Srednia pensja - " << averageSalary << endl;
}

int WorkersManager::getWorkersAmount() const {
    return workersAmount;
}

WorkersManager::~WorkersManager() {
    for (auto it = begin(workers); it != end(workers); it++) {
        delete (*it);
    }
}

ostream &operator<<(ostream &os, const WorkersManager &workersManager) {
    for (auto it = begin(workersManager.workers); it != end(workersManager.workers); it++) {
        os << (*it)->getName() << " " << (*it)->getSurname() << " " << (*it)->getAge() << " " << (*it)->getPosition()
           << " " << (*it)->getSalary() << " " << (*it)->getCountry() << endl;
    }
    return os;
}
