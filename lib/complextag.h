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

#ifndef COMPLEXTAG_H
#define COMPLEXTAG_H

#include "tag.h"
#include "util.h"

class ComplexTag : public Tag
{
public:
    ComplexTag();
    ComplexTag(std::string name, short weight);
    virtual ~ComplexTag();

    void addSubtag(Tag* tag) override;
    Tag* findSubtag(const std::string name, bool recursive = false) const override;
    std::multiset<Tag*, TagComparator> getSubtags() override;

    void setValue(std::string value) override;

    bool isBlank() const override;
    xmlpp::Element* toXml(xmlpp::Element* parent) const override;
    void compact() override;
    void build(xmlpp::Element *element) override;

protected:
    std::multiset<Tag*, TagComparator> subtags;
};

#endif // COMPLEXTAG_H
