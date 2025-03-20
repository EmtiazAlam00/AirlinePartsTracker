#include "Airline.h"

using namespace std;

// Constructor
Airline::Airline(const string& name) : name(name) {}

// Destructor
Airline::~Airline() {
    for (int i = 0; i < aircrafts.getSize(); i++) {
        delete aircrafts[i];
    }
    for (int i = 0; i < parts.getSize(); i++) {
        delete parts[i];
    }
}

// Helper function: Get Aircraft by registration
Aircraft* Airline::getAircraft(const  string& reg) const {
    for (int i = 0; i < aircrafts.getSize(); i++) {
        if (aircrafts[i]->getRegistration() == reg) {
            return aircrafts[i];
        }
    }
    return nullptr;
}

// Helper function: Get Part by name
Part* Airline::getPart(const string& partName) const {
    for (int i = 0; i < parts.getSize(); i++) {
        if (parts[i]->getName() == partName) {
            return parts[i];
        }
    }
    return nullptr;
}

// Add an aircraft
void Airline::addAircraft(const string& type, const string& registration) {
    aircrafts.add(new Aircraft(type, registration));
}

// Add a part
void Airline::addPart(const string& partName, int fh_inspect, int it_inspect) {
    if (fh_inspect == 0) {
        parts.add(new IT_Part(partName, it_inspect));
    } else if (it_inspect == 0) {
        parts.add(new FH_Part(partName, fh_inspect));
    } else {
        parts.add(new FHIT_Part(partName, fh_inspect, it_inspect));
    }
}

// Take flight
void Airline::takeFlight(const string& reg, int hours) {
    Aircraft* aircraft = getAircraft(reg);
    if (aircraft) {
        aircraft->takeFlight(hours);
    } else {
         cerr << "Error: Aircraft with registration " << reg << " not found.\n";
    }
}

// Print all aircraft
void Airline::printAircraft() const {
    for (int i = 0; i < aircrafts.getSize(); i++) {
         cout << *(aircrafts[i]) << "\n";
    }
}

// Print all parts
void Airline::printParts() const {
    for (int i = 0; i < parts.getSize(); i++) {
         cout << *(parts[i]) << "\n";
    }
}

// Inspection report
void Airline::inspectionReport(const string& reg, const Date& date) const {
    Aircraft* aircraft = getAircraft(reg);
    if (!aircraft) {
         cerr << "Error: Aircraft with registration " << reg << " not found.\n";
        return;
    }
    Array<Part*> report;
    aircraft->inspectionReport(date, report);

     cout << "Inspection Report for Aircraft: " << reg << "\n";
    for (int i = 0; i < report.getSize(); i++) {
         cout << *(report[i]) << "\n";
    }
}

// Install a part onto an aircraft
bool Airline::install(const string& reg, const string& partName, const Date& date) {
    Aircraft* aircraft = getAircraft(reg);
    Part* part = getPart(partName);

    if (!aircraft) {
        cerr << "Error: Aircraft with registration " << reg << " not found.\n";
        return false;
    }
    if (!part) {
        cerr << "Error: Part with name " << partName << " not found.\n";
        return false;
    }

    aircraft->install(part, date);
    return true;
}
