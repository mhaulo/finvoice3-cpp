#ifndef COMPLEXTAG_H
#define COMPLEXTAG_H

#include "tag.h"
#include "util.h"

class ComplexTag : public Tag
{
public:
    ComplexTag();
    ComplexTag(std::string name, short weight);
    virtual ~ComplexTag();

    void addSubtag(Tag* tag) override;
    Tag* findSubtag(const std::string name, bool recursive = false) const override;
    std::multiset<Tag*, TagComparator> getSubtags() override;

    void setValue(std::string value) override;

    bool isBlank() const override;
    xmlpp::Element* toXml(xmlpp::Element* parent) const override;
    void compact() override;
    void build(xmlpp::Element *element) override;

protected:
    std::multiset<Tag*, TagComparator> subtags;
};

#endif // COMPLEXTAG_H
