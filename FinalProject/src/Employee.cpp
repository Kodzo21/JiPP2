

#include "Employee.h"


Employee::Employee(string name, string surname, int age, string gender,string position, int salary, string country,) : position(position) {
    this->name = name;
    this->surname = surname;
    this->age=age;
    this->gender = gender;
    this->salary = salary;
    this->country = country;

}

void Employee::printData() {
    cout<<"Imie i nazwisko: "<<name<<" "<<surname<<" Wiek: "
    <<age<<" Plec: "<<gender<<" Stanowisko: "<<position<<", Wynagrodzenie: "
        <<salary<<", Kraj: "<<country<<endl;
}

