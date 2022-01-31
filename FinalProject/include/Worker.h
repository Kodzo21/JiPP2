
#ifndef JIPP2_WORKER_H
#define JIPP2_WORKER_H

#include <iostream>

using namespace std;

class Worker {
protected:
    string name;
    string surname;
    int age;
    string country;
    int salary;
public:
    /**
     * Destruktor
     */
    virtual ~Worker() = default;

    /**
     * Metoda  do wyswietlania danych z obiektow
     */
    virtual void printData() = 0;

    /**
     * Getter imienia
     * @return imie
     */
    virtual const string &getName() const = 0;

    /**
     * setter imienia
     * @param name imie
     */
    virtual void setName(const string &name) = 0;

    /**
     * getter nazwiska
     * @return nazwisko
     */
    virtual const string &getSurname() const = 0;

    /**
     * setter nazwiska
     * @param surname nazwisko
     */
    virtual void setSurname(const string &surname) = 0;

    /**
     * getter wieku
     * @return wiek
     */
    virtual int getAge() const = 0;

    /**
     * setter wieku
     * @param age wiek
     */
    virtual void setAge(int age) = 0;

    /**
     * getter kraju
     * @return kraj
     */
    virtual const string &getCountry() const = 0;

    /**
     * setter kraju
     * @param country kraj
     */
    virtual void setCountry(const string &country) = 0;

    /**
     * getter wynagrodzenia
     * @return wynagrodzenie
     */
    virtual int getSalary() const = 0;

    /**
     * setter wynagrodzenia
     * @param salary wynagrodzenie
     */
    virtual void setSalary(int salary) = 0;

    /**
     * getter stanowiska
     * @return stanowisko
     */
    virtual const string &getPosition() const = 0;

    /**
     * setter stanowiska
     * @param position stanowisko
     */
    virtual void setPosition(const string &position) = 0;
};

#endif //JIPP2_WORKER_H
