#include <MainFunctions.h>

Worker *createEmployee() {
    string name, surname, country, position;
    int age, salary;
    cout << "Podaj imie:";
    cin >> name;
    cout << "Podaj nazwisko:";
    cin >> surname;
    cout << "Podaj wiek:";
    cin >> age;
    cout << "Podaj nazwe stanowiska:";
    cin >> position;
    cout << "Podaj wysokosc wynagrodzenia:";
    cin >> salary;
    cout << "Podaj kraj pochodzenia";
    cin >> country;
    Worker *worker = new Employee(name, surname, age, position, salary, country);
    return worker;
}

Worker *createManager() {
    string name, surname, country;
    int age, salary;
    cout << "Podaj imie:";
    cin >> name;
    cout << "Podaj nazwisko:";
    cin >> surname;
    cout << "Podaj wiek:";
    cin >> age;
    cout << "Podaj wysokosc wynagrodzenia:";
    cin >> salary;
    cout << "Podaj kraj pochodzenia";
    cin >> country;
    Worker *worker = new Manager(name, surname, age, salary, country);
    return worker;
}