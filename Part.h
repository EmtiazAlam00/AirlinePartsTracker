#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

//Base class
class Part {
    public:
    //Constructors
    Part(const string& partName);
    //Destructor
    virtual ~Part();
    //Getter
    string getName() const;
    //member functions
    void addFlightHours(int hours);
    void install(const Date& date);
    // Pure virtual function
    virtual bool inspection(const Date& date) const = 0;
    //print function overload
    friend ostream& operator<<(ostream& out, const Part& part);

    //protected so derived classes can access them
    protected:
    //member variables
    string name;
    Date installationDate;
    int flightHours;
    virtual ostream& print(ostream& out) const;
};

#endif
