#ifndef FH_PART_H
#define FH_PART_H

#include "Part.h"

class FH_Part : virtual public Part {  // Virtual inheritance
public:
    FH_Part(const std::string& name, int fh_inspect);
    virtual ~FH_Part() {}

    bool inspection(const Date& date) const override;

protected:
    int fh_inspect;
};

#endif
