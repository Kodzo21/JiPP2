
#include "Employee.h"


Employee::Employee(string &name, string &surname, int &age,string &position, int &salary, string &country) : position(position) {
    this->name = name;
    this->surname = surname;
    this->age=age;
    this->salary = salary;
    this->country = country;

}

void Employee::printData() {
    cout<<"Imie i nazwisko:"<<name<<" "<<surname<<" Wiek:"
    <<age<<" Stanowisko:"<<position<<" Wynagrodzenie:"
        <<salary<<" Kraj:"<<country<<endl;
}


const string &Employee::getPosition() const {
    return position;
}

const string &Employee::getName() const {
    return name;
}

const string &Employee::getSurname() const {
    return surname;
}

const string &Employee::getCountry() const {
    return country;
}

int Employee::getAge() const {
    return age;
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setName(const string &name) {
    this->name = name;
}

void Employee::setSurname(const string &surname) {
    this->surname = surname;
}

void Employee::setAge(int age) {
    this->age = age;
}

void Employee::setCountry(const string &country) {
    this->country = country;
}

void Employee::setSalary(int salary) {
    this->salary = salary;
}

void Employee::setPosition(const string &position) {
    this->position = position;
}




