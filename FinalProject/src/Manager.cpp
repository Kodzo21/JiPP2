//
// Created by rycze on 21.01.2022.
//

#include "Manager.h"


Manager::Manager(string name,string surname,int age,string gender, int salary, string country) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->gender = gender;
    this->salary = salary;
    this->country = country;
}

void Manager::printData() {
    cout<<"Imie i nazwisko: "<<name<<" "<<surname<<" Wiek: "<<age<<" Plec: "<<gender<<" Stanowisko: "<<position<<", Wynagrodzenie: "
    <<salary<<", Kraj: "<<country<<endl;
}
