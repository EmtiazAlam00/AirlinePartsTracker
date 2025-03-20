#include "FH_Part.h"

FH_Part::FH_Part(const std::string& name, int fh_inspect) 
    : Part(name), fh_inspect(fh_inspect) {}

bool FH_Part::inspection(const Date& date) const {
    return flightHours >= fh_inspect;
}
