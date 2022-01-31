#include <MainFunctions.h>

Worker *createEmployee() {
    string name, surname, country, position;
    int age, salary;
    cout << "Podaj imie:";
    cinInput(name);
    cout << "Podaj nazwisko:";
    cinInput(surname);
    cout << "Podaj wiek:";
    cinInput(age);
    cout << "Podaj nazwe stanowiska:";
    cinInput(position);
    cout << "Podaj wysokosc wynagrodzenia:";
    cinInput(salary);
    cout << "Podaj kraj pochodzenia";
    cinInput(country);
    Worker *worker = new Employee(name, surname, age, position, salary, country);
    return worker;
}

Worker *createManager() {
    string name, surname, country;
    int age, salary;
    cout << "Podaj imie:";
    cinInput(name);
    cout << "Podaj nazwisko:";
    cinInput(surname);
    cout << "Podaj wiek:";
    cinInput(age);
    cout << "Podaj wysokosc wynagrodzenia:";
    cinInput(salary);
    cout << "Podaj kraj pochodzenia:";
    cinInput(country);
    Worker *worker = new Manager(name, surname, age, salary, country);
    return worker;
}


