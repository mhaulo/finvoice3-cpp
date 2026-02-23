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

#include "finvoice3.h"
#include <iostream>

Finvoice3::Finvoice3() :
    document(new xmlpp::Document),
    finvoice(new Finvoice)
{
}

Finvoice3::~Finvoice3()
{
    delete finvoice;
    delete document;
}

std::string Finvoice3::version()
{
    char buffer[8];
    int n = snprintf(buffer, 8, "%u.%u.%u", VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION);

    std::string formattedOutput = "";

    if (n > 0 && n < 8) {
        formattedOutput = std::string(buffer);
    }

    return formattedOutput;
}

unsigned Finvoice3::versionMajor()
{
    return VERSION_MAJOR;
}

unsigned Finvoice3::versionMinor()
{
    return VERSION_MINOR;
}

unsigned Finvoice3::versionRevision()
{
    return VERSION_REVISION;
}

void Finvoice3::compact()
{
    finvoice->compact();
}

void Finvoice3::build()
{
    compact();
    xmlpp::Element *root = document->create_root_node("Finvoice");

    for (auto attribute : finvoice->getAttributes()) {
        root->set_attribute(attribute.first, attribute.second);
    }

    for (Tag *tag : finvoice->getSubtags()) {
        xmlpp::Element *element = root->add_child(tag->getName());
        tag->build(element);
    }
}

xmlpp::Document* Finvoice3::getDocument() const
{
    return document;
}

std::string Finvoice3::toString() const
{
    return document->write_to_string_formatted();
}

Finvoice* Finvoice3::root()
{
    return finvoice;
}

bool Finvoice3::validate(const std::string schemaFilePath) const
{
    bool success = false;

    try {
        xmlpp::DomParser parser;
        parser.parse_memory(toString());
        xmlpp::SchemaValidator validator(schemaFilePath);
        validator.validate(parser.get_document());
        success = true;
    }
    catch(const xmlpp::exception& exception) {
        std::cout << exception.what() << std::endl;
    }

    return success;
}
