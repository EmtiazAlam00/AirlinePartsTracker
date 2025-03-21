#include "IT_Part.h"

//constructor
IT_Part::IT_Part(const string& name, int it_inspect) : Part(name), it_inspect(it_inspect) {}

//inherited virtual member function
bool IT_Part::inspection(const Date& date) const {
    return (date.toDays() - installationDate.toDays()) >= it_inspect;
}
