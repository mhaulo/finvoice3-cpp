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

#include "rowanypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "rowanypartypostaladdressdetails.h"

RowAnyPartyDetails::RowAnyPartyDetails() : ComplexTag("RowAnyPartyDetails", 54)
{
    addSubtag(new SimpleTag("RowAnyPartyText", 0));
    addSubtag(new PartyLegalRegId("RowAnyPartyIdentifier", 1));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationName", 2));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationDepartment", 3));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationTaxCode", 4));
    addSubtag(new PartyIdentifier("RowAnyPartyCode", 5));
    addSubtag(new RowAnyPartyPostalAddressDetails);
    addSubtag(new SimpleTag("RowAnyPartyOrganisationUnitNumber", 7));
    addSubtag(new SimpleTag("RowAnyPartySiteCode", 8));
}
