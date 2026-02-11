#ifndef SIMPLETAG_H
#define SIMPLETAG_H

#include "tag.h"

#include <string>

class SimpleTag : public Tag
{
public:
    SimpleTag();
    SimpleTag(std::string name);

    std::string getValue() const;
    virtual bool isBlank() const;
    xmlpp::Element* toXml(xmlpp::Element* parent) const;

    void setValue(std::string value);

protected:
    std::string value;
};

#endif // SIMPLETAG_H
