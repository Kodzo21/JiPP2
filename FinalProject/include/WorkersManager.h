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
#include<MainFunctions.h>

using namespace std;

class WorkersManager {
private:
    vector<Worker *> workers;
    int workersAmount = 0;
    double averageSalary = 0;
public:
    /**
     * Konstruktor obiektu typu WorkersManager
     */
    WorkersManager();

    /**
     * Destruktor obiektu typu WorkersManager
     */
    ~WorkersManager();

    /**
     * getter dla pola workersAmount
     * @return ilosc pracownikow
     */
    int getWorkersAmount() const;

    /**
     * Wyswietla liste pracownikow
     */
    void printWorkersList();

    /**
     * Dodaje pracownika
     * @param worker wskaznik na obiekt typu Worker
     */
    void addWorker(Worker *worker);

    /**
     * Usuwa pracownika
     * @param index numer pracownika
     */
    void fireWorker(int index);

    /**
     * Edytuje pracownika
     * @param index numer pracownika
     */
    void editWorker(int index);

    /**
     * Wyszukuje pracownikow poprzez podanie imienia
     * @param name imie
     */
    void findWorkerByName(string name);

    /**
     * Awansuje pracownika na managera
     * @param index nr pracownika
     */
    void promoteEmployee(int index);

    /**
     * Degraduje managera do nizszego stanowiska
     * @param index
     */
    void demoteManager(int index);

    /**
     * oblicza dane na nowo
     */
    void updateData();

    /**
     * Wyswietla aktualne statystyki
     */
    void showStats();

    /**
     * Przeladowanie operatora << - funkcja zaprzyjazniona
     * @param os strumien
     * @param workersManager obiekt typu WorkersMangaer
     * @return strumien wynikowy
     */
    friend ostream &operator<<(ostream &os, const WorkersManager &workersManager);
};

#endif //JIPP2_WORKERSMANAGER_H
