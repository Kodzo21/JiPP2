#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H
#include <iostream>
using namespace std;
class Student {
private:
    string imie;
    string nazwisko;
    int numerAlbumu;
    int liczbaPytan;
    int poprawneOdp;

public:
    void wczytajDane();
    double obliczProcent();
};


#endif //JIPP2_STUDENT_H
