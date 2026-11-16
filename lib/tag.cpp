/***************************************************************************
 *   C++ Finvoice 3.0 library                                              *
 *   Copyright (C) 2026 Mika Haulo (mika@haulo.fi)                         *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, see                          *
 *   <https://www.gnu.org/licenses/>.                                      *
 ***************************************************************************/

#include "tag.h"

Tag::Tag() :
    name(""),
    weight(0)
{

}

Tag::Tag(const std::string &tagName, short tagWeight) :
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

std::string Tag::getAttribute(const std::string &key) const
{
    return attributes.at(key);
}

void Tag::setAttribute(const std::string &key, const std::string &value)
{
    attributes[key] = value;
}

void Tag::removeAttribute(const std::string &key)
{
    attributes.erase(key);
}

bool Tag::hasSubtag(const std::string &name) const
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
    for (const auto &[key, value] : attributes) {
        element->set_attribute(key, value);
    }
}

void Tag::setWeight(short newWeight)
{
    weight = newWeight;
}
