#ifndef IT_PART_H
#define IT_PART_H

#include "Part.h"

class IT_Part : virtual public Part {  // Virtual inheritance
public:
    IT_Part(const std::string& name, int it_inspect);
    virtual ~IT_Part() {}

    bool inspection(const Date& date) const override;

protected:
    int it_inspect;
};

#endif
