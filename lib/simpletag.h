#ifndef SIMPLETAG_H
#define SIMPLETAG_H

#include "tag.h"

#include <string>

class SimpleTag : public Tag
{
public:
    SimpleTag();
    SimpleTag(std::string name, short weight);

    std::string getValue() const;
    virtual bool isBlank() const override;
    xmlpp::Element* toXml(xmlpp::Element* parent) const override;
    Tag* findSubtag(const std::string name, bool recursive = false) const override;
    std::multiset<Tag*> getSubtags() override;
    void addSubtag(Tag* tag) override;

    void setValue(std::string value) override;
    void build(xmlpp::Element *element) override;

protected:
    std::string value;
};

#endif // SIMPLETAG_H
