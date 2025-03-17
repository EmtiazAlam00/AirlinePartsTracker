#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

class Part{
    public:
    //Constructor
    Part(const string& partName);
    virtual ~Part();
    //getter
    string getName() const;
    //functions
    void addFlightHours(int hours);
    void install(const Date& date);
    friend ostream& operator<<(ostream& out, const Part& part);
    //pure virtual function for inspection logic (to be implemented in derived classes)
    virtual bool inspection(const Date& date) const = 0;

    protected:
    //member functions
    string name;
    Date installationDate;
    int flightHours;
    virtual ostream& print(ostream& out) const;
};
#endif