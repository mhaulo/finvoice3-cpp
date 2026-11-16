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

#include "simpletag.h"
#include "util.h"
#include <algorithm>

SimpleTag::SimpleTag() : Tag()
{

}

SimpleTag::SimpleTag(const std::string &name, short weight) : Tag(name, weight)
{

}

std::string SimpleTag::getValue() const
{
    return value;
}

bool SimpleTag::isBlank() const
{
    bool blank = value.empty() &&
        std::none_of(attributes.begin(), attributes.end(), [](const auto &attribute) {
            return !attribute.second.empty();
        });

    return blank;
}

xmlpp::Element* SimpleTag::toXml(xmlpp::Element* parent) const
{
    xmlpp::Element* element = parent->add_child(name);

    for (const auto &[k, v] : attributes) {
        element->set_attribute(k, v);
    }

    element->add_child_text(value);

    return element;
}

void SimpleTag::setValue(const std::string &newValue)
{
    value = newValue;
}

Tag* SimpleTag::findSubtag(const std::string &name, bool recursive) const
{
    return nullptr;
}

void SimpleTag::build(xmlpp::Element *element)
{
    Tag::build(element);
    element->add_child_text(value);
}

std::multiset<Tag*, TagComparator> SimpleTag::getSubtags()
{
    return std::multiset<Tag*, TagComparator>();
}

void SimpleTag::addSubtag(Tag* tag)
{
    return;
}
