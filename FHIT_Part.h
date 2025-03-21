#ifndef FHIT_PART_H
#define FHIT_PART_H

#include "FH_Part.h"
#include "IT_Part.h"

using namespace std;

class FHIT_Part : public FH_Part, public IT_Part { //virtual inheritance
public:
    //constructor
    FHIT_Part(const string& name, int fh_inspect, int it_inspect);
    //destructor
    virtual ~FHIT_Part() {}
    //inherited virtual member function
    bool inspection(const Date& inspectionDate) const override;
};
#endif
