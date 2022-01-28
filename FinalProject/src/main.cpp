#include <iostream>
#include <WorkersManager.h>
#include <Worker.h>
#include<Employee.h>
/*
lista :
wskaźniki - git
klasy - git
dziedziczenie - git
polimorfizm - git
szablon -nie ma
przeciążanie metod - git
przeciążanie operatorów -nie ma
konstruktory, destruktory - nie ma
kontenery - git
„bazę danych” - plik też jest bazą danych - git
parametry wywoływania programu - nie ma
obsługę błędów - nie ma
*/


using namespace std;

int main(){
WorkersManager workersManager;
Worker *worker = new Employee("Lukasz","Ryczek",20,"Robol",2500,"Polska");
workersManager.addWorker(worker);
workersManager.printWorkersList();
workersManager.updateData();
workersManager.showStats();
return 0;
}