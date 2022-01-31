
#ifndef JIPP2_MANAGER_H
#define JIPP2_MANAGER_H

#include "Worker.h"
#include <iostream>

using namespace std;

class Manager : public Worker {
private:
    string position = "Manager";

public:
    /**
     * Konstruktor obiektu Manager
     * @param name imie
     * @param surname nazwisko
     * @param age wiek
     * @param salary wynagrodzenie
     * @param country kraj
     */
    Manager(string &name, string &surname, int &age, int &salary, string &country);

    ~Manager() override = default;

    void printData() override;

    const string &getName() const override;

    void setName(const string &name) override;

    const string &getSurname() const override;

    void setSurname(const string &surname) override;

    int getAge() const override;

    void setAge(int age) override;

    const string &getCountry() const override;

    void setCountry(const string &country) override;

    int getSalary() const override;

    void setSalary(int salary) override;

    const string &getPosition() const override;

    void setPosition(const string &position) override;
};


#endif //JIPP2_MANAGER_H
