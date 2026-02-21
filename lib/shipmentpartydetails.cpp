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

#include "shipmentpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "shipmentpostaladdressdetails.h"

ShipmentPartyDetails::ShipmentPartyDetails() : ComplexTag("ShipmentPartyDetails", 2)
{
    addSubtag(new PartyLegalRegId("ShipmentPartyIdentifier", 0));
    addSubtag(new SimpleTag("ShipmentOrganisationName", 1));
    addSubtag(new SimpleTag("ShipmentOrganisationDepartment", 2));
    addSubtag(new SimpleTag("ShipmentOrganisationTaxCode", 3));
    addSubtag(new PartyIdentifier("ShipmentCode", 4));
    addSubtag(new ShipmentPostalAddressDetails);
}
