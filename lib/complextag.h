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
    Tag* findSubtag(const std::string name, bool recursive = false) const override;
    std::vector<Tag*> getSubtags() override;

    void setValue(std::string value) override;

    bool isBlank() const override;
    xmlpp::Element* toXml(xmlpp::Element* parent) const override;
    void compact() override;
    void build(xmlpp::Element *element) override;

protected:
    std::vector<Tag*> subtags;
};

#endif // COMPLEXTAG_H
