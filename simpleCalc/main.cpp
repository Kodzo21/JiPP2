#include <iostream>
#include <string>
using namespace std;

string calc[] = {"Simple calculator\n",
                 "simpleCalc [nazwa dzialania]\n",
                 "Dzialania: \n",
                 "add [a] [b]  -  dodawanie dwoch liczb ([a] i [b]) calkowitych\n",
                 "substract [a] [b] - odejmowanie dwoch liczb ([a] i [b]) calkowitych\n",
                 "volume [a] [b] - obliczanie objetosci graniastoslupa o podstawie trapezu ([a] - pole podstawy, [b] - wysokosc)\n",
                 "help - wyswietlanie dokumentacji\n"
};
int addNum(int, int);
int substractNum(int, int);
int volumeNum(int, int);
void helpCalc();
void argError(int, int);

int main(int argc, char *argv[]){
    string choice = "";
    if(argc>=2) {
        choice = argv[1];
    }
    int a,b,result;
    if(choice == "add"){
        argError(argc,4);
        a = stoi(argv[2]);
        b = stoi(argv[3]);
        result = addNum(a,b);
    }else if (choice == "substract"){
        argError(argc,4);
        a = stoi(argv[2]);
        b = stoi(argv[3]);
        result = substractNum(a,b);
    }else if (choice == "volume"){
        argError(argc, 4);
        int a = stoi(argv[2]);
        int b = stoi(argv[3]);
        result = volumeNum(a,b);
    }else if(choice == "help") {
        argError(argc, 2);
        helpCalc();
        return 0;
    }
    else{
        cout<<"Zla nazwa dzialania"<<endl;
        helpCalc();
        exit(1);
    }
    cout<< result;
    return 0;
}

int addNum(int a, int b){
    return a+b;
}
int substractNum(int a, int b){
    return a-b;
}
int volumeNum(int a, int b){
    return a*b;
}
void helpCalc(){
    for(string line : calc){
        cout<<line;
    }
}
void argError(int argc,int arg){
    if(argc!=arg){
        cout<<"Zla liczba argumentow"<<endl;
        helpCalc();
        exit(1);
    }
}
