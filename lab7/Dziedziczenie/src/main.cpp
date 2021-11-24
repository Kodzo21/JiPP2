#include <iostream>
#include <Circle.h>
#include <Square.h>
#include <Triangle.h>

using namespace std;

int main(){
    Circle C1("kolo","czerwony",3);
    Square S1("kwadrat","zielony",4);
    Triangle T1("trojkat","niebieski",3,4,5);
    cout<<C1.Area() <<"\t"<<C1.Perimeter()<<endl;
    cout<<S1.Area() <<"\t"<<S1.Perimeter()<<endl;
    cout<<T1.Area() <<"\t"<<T1.Perimeter()<<endl;
    return 0;
}