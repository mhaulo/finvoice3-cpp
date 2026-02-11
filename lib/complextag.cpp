#include "complextag.h"

ComplexTag::ComplexTag() : Tag()
{

}

ComplexTag::ComplexTag(std::string name) : Tag(name)
{

}

ComplexTag::~ComplexTag()
{
    for (Tag *tag : subtags) {
        delete tag;
    }

    subtags.clear();
}

void ComplexTag::addSubtag(Tag* tag)
{
    subtags.push_back(tag);
}

bool ComplexTag::isBlank() const
{
    bool blank = true;

    if (!subtags.empty()) {
        for (Tag* tag : subtags) {
            if (!tag->isBlank()) {
                blank = false;
                break;
            }
        }
    }

    return blank;
}

xmlpp::Element* ComplexTag::toXml(xmlpp::Element* parent) const
{
    xmlpp::Element* element = parent->add_child(name);

    for (std::pair<std::string, std::string> attribute : attributes) {
        element->set_attribute(attribute.first, attribute.second);
    }

    for (Tag *tag : subtags) {
        if (!tag->isBlank()) {
            tag->toXml(element);
        }
    }

    return element;
}
