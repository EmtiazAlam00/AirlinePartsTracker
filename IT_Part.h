#ifndef IT_PART_H
#define IT_PART_H

#include "Part.h"

using namespace std;

class IT_Part : virtual public Part {  // Virtual inheritance
public:
    //constructor
    IT_Part(const string& name, int it_inspect);
    //destructor
    virtual ~IT_Part() {}
    //inherited virtual member functions
    bool inspection(const Date& date) const override;

protected:
    //member variable
    int it_inspect;
};
#endif
