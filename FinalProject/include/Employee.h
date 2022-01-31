

#ifndef JIPP2_EMPLOYEE_H
#define JIPP2_EMPLOYEE_H


#include "Worker.h"
#include <iostream>

using namespace std;

class Employee : public Worker {
private:
    string position;

public:
    /**
     * Konstuktor obiektu typu Employee
     * @param name imie
     * @param surname nazwisko
     * @param age wiek
     * @param position stanowisko
     * @param salary wynagrodzenie
     * @param country kraj
     */
    Employee(string &name, string &surname, int &age, string &position, int &salary, string &country);

    ~Employee() override = default;

    void printData() override;

    const string &getPosition() const override;

    const string &getName() const override;

    const string &getSurname() const override;


    const string &getCountry() const override;

    int getAge() const override;

    int getSalary() const override;

    void setName(const string &name) override;

    void setSurname(const string &surname) override;

    void setAge(int age) override;

    void setCountry(const string &country) override;

    void setSalary(int salary) override;

    void setPosition(const string &position) override;
};


#endif //JIPP2_EMPLOYEE_H
