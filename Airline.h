#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>
#include "Date.h"       
#include "Aircraft.h"
#include "FH_Part.h"
#include "IT_Part.h"
#include "FHIT_Part.h"
#include "Array.h"

using namespace std;

class Airline {
public:
    // Constructor
    Airline(const string& name);

    // Destructor
    ~Airline();

    // Add an aircraft
    void addAircraft(const string& type, const string& registration);

    // Add a part
    void addPart(const string& partName, int fh_inspect, int it_inspect);

    // Take flight
    void takeFlight(const string& reg, int hours);

    // Print all aircraft
    void printAircraft() const;

    // Print all parts
    void printParts() const;

    // Inspection report
    void inspectionReport(const string& reg, const Date& date) const;

    // Install a part
    bool install(const string& reg, const string& partName, const Date& date);  // Changed Date& to const Date&

private:
    //member variables
    string name;
    Array<Aircraft*> aircrafts;
    Array<Part*> parts;

    // Helper functions
    Aircraft* getAircraft(const string& reg) const;
    Part* getPart(const string& partName) const;
};

#endif
