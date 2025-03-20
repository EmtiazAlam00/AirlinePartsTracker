#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <iostream>
#include <string>
#include "Part.h"
#include "Array.h"

class Aircraft {
public:
    // Constructor
    Aircraft(const std::string& type, const std::string& registration);
    
    // Destructor
    ~Aircraft();

    // Getter for registration
    std::string getRegistration() const;

    // Install a part
    void install(Part* part, const Date& date);

    // Take flight and update hours
    void takeFlight(int hours);

    // Generate inspection report
    void inspectionReport(const Date& date, Array<Part*>& report) const;

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& out, const Aircraft& aircraft);

private:
    std::string type;
    std::string registration;
    int flighthours;
    Array<Part*> parts;
};

#endif
