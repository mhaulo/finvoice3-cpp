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

#include "invoice.h"

Invoice::Invoice() :
    document(new xmlpp::Document)
{
    setAttribute("Version", "3.0");
    setAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");
    setAttribute("xsi:noNamespaceSchemaLocation", "Finvoice3.0.xsd");
}

Invoice::~Invoice()
{
    delete document;
}

xmlpp::Document* Invoice::getDocument() const
{
    return document;
}

std::string Invoice::toString() const
{
    return document->write_to_string_formatted();
}
