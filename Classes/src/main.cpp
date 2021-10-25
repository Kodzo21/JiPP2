#include <iostream>
#include "../include/Prostopadloscian.h"
#include "../include/Kolo.h"
#include "../include/FunkcjaKwadratowa.h"
#include "../include/Student.h"
#include "../include/Punkt.h"
#include "../include/Figura.h"

using namespace std;

int main() {
    //1
    int dlugosc, szerokosc, wysokosc;
    cout << "Podaj dlugosc wysokosc i szerokosc prostopadloscianu" << endl;
    cin >> dlugosc;
    cin >> szerokosc;
    cin >> wysokosc;
    Prostopadloscian p1(dlugosc,szerokosc,wysokosc);
    cout << "Obliczone pole: " << p1.obliczPP() << endl;
    //2
    double promien;
    cout << "Podaj promien kola" << endl;
    cin >> promien;
    Kolo k1(promien);
    cout << k1.calcArea() << endl;
    //3
    int a, b, c;
    cout << "Podaj a,b,c" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    FunkcjaKwadratowa f1(a, b, c);
    f1.printFunkcja();
    //4
    Student s1;
    s1.wczytajDane();
    cout.precision(4);
    cout << s1.obliczProcent() << "%" << endl;
    return 0;
}