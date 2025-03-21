#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>
#include <string>
#include "Part.h"
#include "Array.h"

using namespace std;

class Aircraft {
public:
    // Constructor
    Aircraft(const string& type, const string& registration);
    // Destructor
    ~Aircraft();
    // Getter for registration
    string getRegistration() const;
    // Install a part
    void install(Part* part, const Date& date);
    // Take flight and update hours
    void takeFlight(int hours);
    // Generate inspection report
    void inspectionReport(const Date& date, Array<Part*>& report) const;
    // Overload << operator
    friend ostream& operator<<(ostream& out, const Aircraft& aircraft);

private:
    string type;
    string registration;
    int flighthours;
    Array<Part*> parts;
};

#endif
