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
    return value.empty() && attributes.empty(); // TODO blank atrribute mean it's empty
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
