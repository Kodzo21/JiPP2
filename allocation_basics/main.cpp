#include <iostream>
#include<string>
using namespace std;

int main(int argc, char *argv[]){
    int a = stoi(argv[3]);
    cout<<a;
    for(int n = 0; n < argc; n++){
        cout<<argv[n]<<endl;
    }
    int *n;
    n = new int;
    delete n;
    int k;
    int *tab = new int [5];
    delete[] tab;

    cout<< n << endl << *n << endl << &n << endl << &k << endl;

    int **tab2 = new int*[5];
    for(int i = 0; i< 5; i++){
        tab2[i] = new int[5];
    }

    int tab3[3] = {3,2,1};

    return 0;
}