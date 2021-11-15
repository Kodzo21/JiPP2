#ifndef JIPP2_POJAZD_H
#define JIPP2_POJAZD_H
#include <iostream>

using namespace std;

class Pojazd {
private:
    string numerRejestracyjny;
    string nazwa;
    int iloscMiejsc;
    string *miejsca;
    string marka;
    string typ;
public:
    Pojazd(const string &numerRejestracyjny, const string &nazwa, int iloscMiejsc, const string &marka,
           const string &typ);
    void printInfo();
    void zmienMiejsce(int numerMiejsca, string pasazer);
    Pojazd(Pojazd &pojazd);

    const string &getNumerRejestracyjny() const;

    const string &getNazwa() const;

    const string &getMarka() const;

    const string &getTyp() const;

    void setNumerRejestracyjny(const string &numerRejestracyjny);

    void setNazwa(const string &nazwa);
};

#endif //JIPP2_POJAZD_H
