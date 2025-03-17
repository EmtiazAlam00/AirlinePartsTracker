#ifndef FH_PART_H
#define FH_PART_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Part.h"

using namespace std;

class FH_Part: public Part{
    public:
    //constructor
    FH_Part(const string& partName, int inspectHours);
    //Destructor
    virtual ~FH_Part();
    //Implementation of inspection function
    virtual bool inspection(const Date& date) const

    protected:
    int fh_inspect;
};
#endif