
#ifndef JIPP2_WORKER_H
#define JIPP2_WORKER_H

#include <string>

using namespace std;

class Worker {
protected:
    string name;
    string surname;
    int age;
    string country;
    int salary;
public:
  //  virtual ~Worker() = 0;

    virtual void printData() = 0;

    virtual const string &getName() const = 0;

    virtual void setName(const string &name) = 0;

    virtual const string &getSurname() const = 0;

    virtual void setSurname(const string &surname) = 0;

    virtual int getAge() const = 0;

    virtual void setAge(int age) = 0;

    virtual const string &getCountry() const = 0;

    virtual void setCountry(const string &country) = 0;

    virtual int getSalary() const = 0;

    virtual void setSalary(int salary) = 0;

    virtual const string &getPosition() const = 0;

    virtual void setPosition(const string &position) = 0;
};


#endif //JIPP2_WORKER_H
