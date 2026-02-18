#include "complextag.h"
#include "util.h"
#include <algorithm>

ComplexTag::ComplexTag() : Tag()
{

}

ComplexTag::ComplexTag(std::string name, short weight) : Tag(name, weight)
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
    subtags.insert(tag);
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

Tag* ComplexTag::findSubtag(const std::string name, bool recursive) const
{
    auto it = find_if(subtags.begin(), subtags.end(), [name](Tag* tag){ return tag->getName() == name; });
    Tag *tag = nullptr;

    if (it != subtags.end()) {
        tag = *it;
    }

    if (!tag && recursive) {
        for (Tag *subtag : subtags) {
            tag = subtag->findSubtag(name, true);

            if (tag) {
                break;
            }
        }
    }

    return tag;
}

void ComplexTag::compact()
{
    Tag::compact();

    for (auto it = subtags.begin(); it != subtags.end();) {
        Tag *tag = *it;
        tag->compact();

        if (tag->isBlank()) {
            subtags.erase(it);
            delete tag;
            tag = nullptr;
        }
        else {
            it++;
        }
    }
}

void ComplexTag::build(xmlpp::Element *element)
{
    Tag::build(element);

    for (Tag *tag : subtags) {
        xmlpp::Element *child = element->add_child(tag->getName());
        tag->build(child);
    }
}

void ComplexTag::setValue(std::string value)
{
    // Do nothing
}

std::multiset<Tag*, TagComparator> ComplexTag::getSubtags()
{
    return subtags;
}
