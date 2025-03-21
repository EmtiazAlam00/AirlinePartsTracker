#include "FH_Part.h"

//constructor
FH_Part::FH_Part(const string& name, int fh_inspect) 
    : Part(name), fh_inspect(fh_inspect) {}
//inherited virtual member functions
bool FH_Part::inspection(const Date& date) const {
    return flightHours >= fh_inspect;
}
