#include "FHIT_Part.h"

// Constructor: Initialize using virtual inheritance
FHIT_Part::FHIT_Part(const std::string& name, int fh_inspect, int it_inspect)
    : Part(name), FH_Part(name, fh_inspect), IT_Part(name, it_inspect) {}

// Inspection logic for FHIT_Part
bool FHIT_Part::inspection(const Date& inspectionDate) const {
    return FH_Part::inspection(inspectionDate) || IT_Part::inspection(inspectionDate);
}
