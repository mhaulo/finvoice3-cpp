#include "tag.h"

Tag::Tag()
{

}

Tag::Tag(std::string tagName, short tagWeight) :
    name(tagName),
    weight(tagWeight)
{

}

Tag::~Tag()
{

}

bool Tag::operator==(const Tag &other) const
{
    return name == other.name;
}

bool Tag::operator<(const Tag &other) const
{
    return weight < other.weight;
}

std::string Tag::getName() const
{
    return name;
}

std::map<std::string, std::string> Tag::getAttributes() const
{
    return attributes;
}

std::string Tag::getAttribute(std::string key) const
{
    return attributes.at(key);
}

void Tag::setAttribute(std::string key, std::string value)
{
    attributes[key] = value;
}

void Tag::removeAttribute(std::string key)
{
    attributes.erase(key);
}

bool Tag::hasSubtag(const std::string name) const
{
    return findSubtag(name) != nullptr;
}

void Tag::compact()
{
    for (auto it = attributes.begin(); it != attributes.end();) {
        if ((*it).second.empty()) {
            it = attributes.erase(it);
        }
        else {
            it++;
        }
    }
}

void Tag::build(xmlpp::Element *element)
{
    for (auto attribute : attributes) {
        element->set_attribute(attribute.first, attribute.second);
    }
}

void Tag::setWeight(short newWeight)
{
    weight = newWeight;
}
