
#include "Manager.h"


Manager::Manager(string &name, string &surname, int &age, int &salary, string &country) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->salary = salary;
    this->country = country;
}

void Manager::printData() {
    cout << "Imie i nazwisko:" << name << " " << surname << " Wiek:" << age << " Stanowisko:" << position
         << " Wynagrodzenie:"
         << salary << " Kraj:" << country << endl;
}


const string &Manager::getName() const {
    return name;
}

void Manager::setName(const string &name) {
    this->name = name;
}

const string &Manager::getSurname() const {
    return surname;
}

void Manager::setSurname(const string &surname) {
    this->surname = surname;
}

int Manager::getAge() const {
    return age;
}

void Manager::setAge(int age) {
    this->age = age;
}

const string &Manager::getCountry() const {
    return country;
}

void Manager::setCountry(const string &country) {
    this->country = country;
}

int Manager::getSalary() const {
    return salary;
}

void Manager::setSalary(int salary) {
    this->salary = salary;
}

const string &Manager::getPosition() const {
    return position;
}

void Manager::setPosition(const string &position) {
    this->position = position;
}

