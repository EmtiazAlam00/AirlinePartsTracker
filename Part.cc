#include "Part.h"

//Constructor
Part::Part(const string& partName): name(partName), flightHours(0){}
//virtual destructor
Part::~Part(){}

//getter for part name
string Part:: getName() const { return name;}

void Part:: addFlightHours(int hours){ flightHours += hours; }

void Part:: install(const Date& date){
    installationDate = date;
}

ostream& operator<<(ostream& out, const Part& part){ return part.print(out); }

//virtual helper function for << operator
ostream& Part::print(ostream& out) const {
    out << "Part Name: " << name << "\n"
        << "Installation Date: " << installationDate
        << "Flight Hours: " << flightHours << "\n";
    return out;
}
