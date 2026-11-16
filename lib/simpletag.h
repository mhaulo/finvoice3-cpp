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

#ifndef SIMPLETAG_H
#define SIMPLETAG_H

#include "tag.h"

#include <string>

class SimpleTag : public Tag
{
public:
    SimpleTag();
    SimpleTag(const std::string &name, short weight);

    std::string getValue() const;
    virtual bool isBlank() const override;
    xmlpp::Element* toXml(xmlpp::Element* parent) const override;
    Tag* findSubtag(const std::string &name, bool recursive = false) const override;
    std::multiset<Tag*, TagComparator> getSubtags() override;
    void addSubtag(Tag* tag) override;

    void setValue(const std::string &value) override;
    void build(xmlpp::Element *element) override;

protected:
    std::string value;
};

#endif // SIMPLETAG_H
