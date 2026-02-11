#include "tag.h"

Tag::Tag()
{

}

Tag::Tag(std::string tagName) :
    name(tagName)
{

}

Tag::~Tag()
{

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
    attributes.insert({key, value});
}
