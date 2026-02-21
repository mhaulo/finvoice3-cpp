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

#include "factoringpartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

FactoringPartyPostalAddressDetails::FactoringPartyPostalAddressDetails() : ComplexTag("FactoringPartyPostalAddressDetails", 7)
{
    addSubtag(new SimpleTag("FactoringPartyStreetName", 0));
    addSubtag(new SimpleTag("FactoringPartyTownName", 1));
    addSubtag(new SimpleTag("FactoringPartyPostCostIdentifier", 2));
    addSubtag(new SimpleTag("FactoringPartyCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("FactoringPartyPostOfficeBoxIdentifier", 6));
}
