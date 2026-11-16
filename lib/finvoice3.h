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

#ifndef FINVOICE3_H
#define FINVOICE3_H

#include "lib_global.h"
#include <libxml++/libxml++.h>

#include "finvoice.h"
#include "simpletag.h"
#include "complextag.h"
#include "version.h"

class FINVOICE3_EXPORT Finvoice3
{
public:
    Finvoice3();
    ~Finvoice3();

    static std::string version();
    static unsigned versionMajor();
    static unsigned versionMinor();
    static unsigned versionRevision();

    void build();
    void compact();
    bool validate(const std::string &schemaFilePath) const;
    Finvoice* root();
    xmlpp::Document* getDocument() const;
    std::string toString() const;

private:
    xmlpp::Document* document;
    Finvoice *finvoice;

};

#endif // FINVOICE3_H
