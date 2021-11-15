
#include "Pojazd.h"

Pojazd::Pojazd(const string &numerRejestracyjny, const string &nazwa, int iloscMiejsc, const string &marka,
               const string &typ) : numerRejestracyjny(numerRejestracyjny), nazwa(nazwa), iloscMiejsc(iloscMiejsc),
                                    marka(marka), typ(typ) {
    miejsca = new string[iloscMiejsc];
    for (int i = 0; i < iloscMiejsc; ++i) {
        miejsca[i] = "puste";
    }
}

void Pojazd::printInfo() {
    cout << "Numer rejestracyjny: " << numerRejestracyjny << endl;
    cout << "Nazwa: " << nazwa << endl;
    cout << "Ilosc miejsc: " << iloscMiejsc << endl;
    for (int i = 0; i < iloscMiejsc; ++i) {
        cout <<"Miejsce nr "<<i<<": "<< miejsca[i] << endl;
    }
    cout << "Marka: " << marka << endl;
    cout << "Typ: " << typ << endl;
}

void Pojazd::zmienMiejsce(int numerMiejsca, string pasazer) {
    miejsca[numerMiejsca] = pasazer;
}

Pojazd::Pojazd(Pojazd &pojazd) {
    numerRejestracyjny = pojazd.numerRejestracyjny;
    nazwa = pojazd.nazwa;
    iloscMiejsc = pojazd.iloscMiejsc;
    *miejsca = *pojazd.miejsca;
    marka = pojazd.marka;
    typ = pojazd.typ;
}

const string &Pojazd::getNumerRejestracyjny() const {
    return numerRejestracyjny;
}

const string &Pojazd::getNazwa() const {
    return nazwa;
}

const string &Pojazd::getMarka() const {
    return marka;
}

const string &Pojazd::getTyp() const {
    return typ;
}

void Pojazd::setNumerRejestracyjny(const string &numerRejestracyjny) {
    Pojazd::numerRejestracyjny = numerRejestracyjny;
}

void Pojazd::setNazwa(const string &nazwa) {
    Pojazd::nazwa = nazwa;
}
