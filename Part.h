#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include "Date.h"

class Part {
public:
    Part(const std::string& partName);
    virtual ~Part();

    std::string getName() const;
    void addFlightHours(int hours);
    void install(const Date& date);

    virtual bool inspection(const Date& date) const = 0; // Pure virtual function

    friend std::ostream& operator<<(std::ostream& out, const Part& part);

protected: // Make protected so derived classes can access them
    std::string name;
    Date installationDate;
    int flightHours;

    virtual std::ostream& print(std::ostream& out) const;
};

#endif
