#ifndef COMPLEXTAG_H
#define COMPLEXTAG_H

#include "tag.h"

class ComplexTag : public Tag
{
public:
    ComplexTag();
    ComplexTag(std::string name);
    virtual ~ComplexTag();

    void addSubtag(Tag* tag);

    bool isBlank() const;
    xmlpp::Element* toXml(xmlpp::Element* parent) const;

protected:
    std::vector<Tag*> subtags;
};

#endif // COMPLEXTAG_H
