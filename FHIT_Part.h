#ifndef FHIT_PART_H
#define FHIT_PART_H

#include "FH_Part.h"
#include "IT_Part.h"

class FHIT_Part : public FH_Part, public IT_Part {
public:
    FHIT_Part(const std::string& name, int fh_inspect, int it_inspect);
    virtual ~FHIT_Part() {}

    bool inspection(const Date& inspectionDate) const override;
};

#endif
