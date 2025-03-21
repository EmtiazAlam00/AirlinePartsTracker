#include "Part.h"

// Constructor
Part::Part(const string& name) : name(name), flightHours(0) {}

// Virtual destructor
Part::~Part() {}

// Getter for the part name
string Part::getName() const {
    return name;
}

// Add flight hours
void Part::addFlightHours(int hours) {
    if (hours > 0) {
        flightHours += hours;
    }
}

// Install the part on a given date
void Part::install(const Date& date) {
    installationDate = date;
}

// Overload << operator for dynamic binding
ostream& operator<<(ostream& os, const Part& part) {
    return part.print(os);
}

// Virtual helper function for operator<<
ostream& Part::print(ostream& out) const {
    out << "Part Name: " << name << "\n"
        << "Installation Date: " << installationDate
        << "Flight Hours: " << flightHours << "\n";
    return out;
}
