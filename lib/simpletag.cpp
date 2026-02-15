#include "simpletag.h"

SimpleTag::SimpleTag() : Tag()
{

}

SimpleTag::SimpleTag(std::string name) : Tag(name)
{

}

std::string SimpleTag::getValue() const
{
    return value;
}

bool SimpleTag::isBlank() const
{
    bool blank = value.empty();

    for (auto attribute : attributes) {
        if (!attribute.second.empty()) {
            blank = false;
            break;
        }
    }

    return blank;
}

xmlpp::Element* SimpleTag::toXml(xmlpp::Element* parent) const
{
    xmlpp::Element* element = parent->add_child(name);

    for (std::pair<std::string, std::string> attribute : attributes) {
        element->set_attribute(attribute.first, attribute.second);
    }

    element->add_child_text(value);

    return element;
}

void SimpleTag::setValue(std::string newValue)
{
    value = newValue;
}

Tag* SimpleTag::findSubtag(const std::string name, bool recursive) const
{
    return nullptr;
}

void SimpleTag::build(xmlpp::Element *element)
{
    Tag::build(element);
    element->add_child_text(value);
}

std::vector<Tag*> SimpleTag::getSubtags()
{
    return std::vector<Tag*>();
}

void SimpleTag::addSubtag(Tag* tag)
{
    return;
}
