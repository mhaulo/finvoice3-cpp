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

#include "anypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "anypartycommunicationdetails.h"
#include "anypartypostaladdressdetails.h"

AnyPartyDetails::AnyPartyDetails() : ComplexTag("AnyPartyDetails", 33)
{
    addSubtag(new SimpleTag("AnyPartyText", 0));
    addSubtag(new PartyLegalRegId("AnyPartyIdentifier", 1));
    addSubtag(new SimpleTag("AnyPartyOrganisationName", 2));
    // TODO more AnyPartyOrganisationNames
    addSubtag(new SimpleTag("AnyPartyOrganisationDepartment", 3));
    addSubtag(new SimpleTag("AnyPartyOrganisationTaxCode", 4));
    addSubtag(new PartyIdentifier("AnyPartyCode", 5));
    addSubtag(new SimpleTag("AnyPartyContactPersonName", 6));
    addSubtag(new SimpleTag("AnyPartyContactPersonFunction", 7));
    addSubtag(new SimpleTag("AnyPartyContactPersonDepartment", 8));
    addSubtag(new AnyPartyCommunicationDetails);
    addSubtag(new AnyPartyPostalAddressDetails);
    addSubtag(new SimpleTag("AnyPartyOrganisationUnitNumber", 11));
    addSubtag(new SimpleTag("AnyPartySiteCode", 12));
}
