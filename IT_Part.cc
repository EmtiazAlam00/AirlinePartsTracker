#include "IT_Part.h"

IT_Part::IT_Part(const std::string& name, int it_inspect) 
    : Part(name), it_inspect(it_inspect) {}

bool IT_Part::inspection(const Date& date) const {
    return (date.toDays() - installationDate.toDays()) >= it_inspect;
}
