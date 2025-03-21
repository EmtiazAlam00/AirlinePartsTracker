#ifndef FH_PART_H
#define FH_PART_H

#include "Part.h"

using namespace std;

class FH_Part : virtual public Part {  // Virtual inheritance
public:
    //constructor
    FH_Part(const string& name, int fh_inspect);
    //destructor
    virtual ~FH_Part() {}
    //inherited virtual member function
    bool inspection(const Date& date) const override;

protected:
    //member variable
    int fh_inspect;
};
#endif
