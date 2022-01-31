
#ifndef JIPP2_MAINFUNCTIONS_H
#define JIPP2_MAINFUNCTIONS_H

#include <Worker.h>
#include <iostream>
#include <Employee.h>
#include <Manager.h>

using namespace std;

/**
 * Tworzy pracownika
 * @return wskaznik do utworzonego obiektu typu Employee
 */
Worker *createEmployee();

/**
 * Tworzy managera
 * @return wskaznik do utworzonego obiektu typu Manager
 */
Worker *createManager();

/**
 * Wczytuje dane z klawiatury od uzytkownika
 * @tparam T dowolny typ
 * @param variable zmienna w ktorej zapisywane sa dane
 */
template<typename T>
void cinInput(T &variable) {
    while (!(cin >> variable)) {
        cout << "Nie wczytano wartosci - sprobuj ponownie" << endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
}

#endif //JIPP2_MAINFUNCTIONS_H
