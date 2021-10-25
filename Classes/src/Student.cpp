#include "../include/Student.h"

void Student::wczytajDane() {
    string imie,nazwisko;
    int numerAlbumu,liczbaPytan,poprawneOdp;
    cout << "Podaj imie: " << endl;
    cin >> imie;
    cout << "Podaj nazwisko: " << endl;
    cin >> nazwisko;
    cout << "Podaj numer albumu: " << endl;
    cin >> numerAlbumu;
    cout << "Podaj liczbe pytan: " << endl;
    cin >> liczbaPytan;
    cout << "Podaj ilosc poprawnych odpowiedzi: " << endl;
    cin >> poprawneOdp;
    Student::imie = imie;
    Student::nazwisko = nazwisko;
    Student::numerAlbumu = numerAlbumu;
    Student::liczbaPytan = liczbaPytan;
    Student::poprawneOdp = poprawneOdp;
}

double Student::obliczProcent() {
    return poprawneOdp*100./liczbaPytan;
}



