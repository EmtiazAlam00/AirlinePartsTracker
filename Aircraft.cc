#include "Aircraft.h"

#include <iostream>
// Constructor
Aircraft::Aircraft(const std::string& type, const std::string& registration)
    : type(type), registration(registration), flighthours(0) {}

// Destructor
Aircraft::~Aircraft() {}

// Getter for registration
std::string Aircraft::getRegistration() const {
    return registration;
}

// Install a part
void Aircraft::install(Part* part, const Date& date) {
    part->install(date);
    parts.add(part);
}

// Take flight and update hours for aircraft and parts
void Aircraft::takeFlight(int hours) {
    if (hours > 0) {
        flighthours += hours;
        for (int i = 0; i < parts.getSize(); i++) {
            parts[i]->addFlightHours(hours);
        }
    }
}

// Generate an inspection report
void Aircraft::inspectionReport(const Date& date, Array<Part*>& report) const {
    for (int i = 0; i < parts.getSize(); i++) {
        if (parts[i]->inspection(date)) {
            report.add(parts[i]);
        }
    }
}

// Overload << operator
std::ostream& operator<<(std::ostream& out, const Aircraft& aircraft) {
    out << "Aircraft Type: " << aircraft.type << "\n";
    out << "Registration: " << aircraft.registration << "\n";
    out << "Flight Hours: " << aircraft.flighthours << "\n";
    out << "Installed Parts:\n";
    for (int i = 0; i < aircraft.parts.getSize(); i++) {
        out << *(aircraft.parts[i]) << "\n"; // Dereferencing pointer to print Part
    }
    return out;
}
