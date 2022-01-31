#include <iostream>
#include <WorkersManager.h>
#include <Worker.h>
#include <MainFunctions.h>
/*
lista :
wskaźniki - git
klasy - git
dziedziczenie - git
polimorfizm - git
szablon - git
przeciążanie metod - git
przeciążanie operatorów -git
konstruktory, destruktory - troche juz git
kontenery - git
„bazę danych” - plik też jest bazą danych - git
parametry wywoływania programu - git
obsługę błędów - git
*/
using namespace std;

enum menuOptions {
    EXIT,
    PRINT_WORKERS,
    ADD_WORKER,
    FIRE_WORKER,
    EDIT_WORKER,
    FIND,
    PROMOTE,
    DEMOTE,
    SHOW_STATS,
};


int main(int argc, char **argv) {

    if (argc != 2) {
        cout << "Nalezy podac liczbe parzysta jako argument" << endl;
        return -1;
    }
    int i;
    try {
        i = stoi(argv[1], nullptr, 10);
    } catch (const invalid_argument &ia) {
        cout << "Zly argument:" << ia.what() << endl;
        return -1;
    } catch (const out_of_range &oof) {
        cout << "Przekroczono zasieg:" << oof.what() << endl;
        return -1;
    } catch (const exception &e) {
        cout << "Niezidentyfikowany blad:" << e.what() << endl;
        return -1;
    }
    if (i % 2 != 0) {
        cout << "Liczba nie jest parzysta" << endl;
        return -1;
    } else cout << "Podano prawidlowa liczbe - program uruchomiony" << endl;

    int choice, workerChoice, index;
    string name;
    WorkersManager *workersManager = new WorkersManager();
    while (true) {
        cout << "Wybierz opcje" << endl;
        cout << "0 - Wyjscie" << endl;
        cout << "1 - Wyswietl pracownikow" << endl;
        cout << "2 - Dodaj pracownika" << endl;
        cout << "3 - Zwolnij pracownika" << endl;
        cout << "4 - Edytuj pracownika" << endl;
        cout << "5 - Wyszukaj pracownika" << endl;
        cout << "6 - Awansuj pracownika" << endl;
        cout << "7 - Zdegraduj pracownika" << endl;
        cout << "8 - Wyswietl statystyki" << endl;
        cinInput(choice);

        switch (choice) {

            case EXIT: {
                ofstream dataBase;
                dataBase.open("dataBase.txt");
                if (dataBase.is_open()) {
                    dataBase << *workersManager;
                    dataBase.close();
                } else {
                    cout << "Blad otwarcia pliku" << endl;
                    exit(1);
                }
                delete workersManager;
                return 0;
            }

            case PRINT_WORKERS: {
                workersManager->printWorkersList();
                break;
            }

            case ADD_WORKER: {
                cout << "Kogo chcesz dodac??" << endl;
                cout << "1 - Manager" << endl;
                cout << "2 - Inny pracownik" << endl;
                cinInput(workerChoice);
                if (workerChoice == 1) {
                    Worker *worker = createManager();
                    workersManager->addWorker(worker);
                } else if (workerChoice == 2) {
                    Worker *worker = createEmployee();
                    workersManager->addWorker(worker);
                } else
                    cout << "Zla opcja - sprobuj ponownie" << endl;
                break;
            }

            case FIRE_WORKER: {
                cout << "Podaj nr pracownika do zwolnienia:";
                cinInput(index);
                workersManager->fireWorker(index);
                break;
            }

            case EDIT_WORKER: {
                cout << "Podaj nr pracownika, ktorego chcesz edytowac" << endl;
                cinInput(index);
                workersManager->editWorker(index);
                break;
            }
            case FIND:{
                cout<<"Podaj imie:";
                cinInput(name);
                workersManager->findWorkerByName(name);
                break;
            }
            case PROMOTE: {
                cout << "Podaj nr pracownika, ktorego chcesz awansowac" << endl;
                cinInput(index);
                workersManager->promoteEmployee(index);
                break;
            }
            case DEMOTE: {
                cout << "Podaj nr managera, ktorego chcesz zdegradowac" << endl;
                cinInput(index);
                workersManager->demoteManager(index);
                break;
            }
            case SHOW_STATS: {
                workersManager->updateData();
                workersManager->showStats();
                break;
            }
            default: {
                cout << "Podano zla liczbe - wybierz ponownie" << endl;
                break;
            }
        }
    }
}