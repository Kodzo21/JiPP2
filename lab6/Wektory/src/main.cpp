#include <Node.h>
#include "Node.h"
#include "Vector.h"

int main(){
    Vector v1(1,1),v2(2,5);
    Vector v3 = v1 - v2;
    Vector v4 = v1 + v2;
    Vector v5 = v1 * v2;
    Vector v6 = v1 * 5;
    Vector v7 = 5 * v2;
    if(v1 == v2)
        cout << "Rowne" << endl;
    else cout << "Nierowne" << endl;
    v3.print();
    v4.print();
    v5.print();
    v6.print();
    v7.print();

    Node p1(5,5),p2(2,2);
    pointsDistance(p1,p2);
}