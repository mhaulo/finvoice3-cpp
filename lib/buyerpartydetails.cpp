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

#include "buyerpartydetails.h"

#include "simpletag.h"
#include "buyerpostaladdressdetails.h"

BuyerPartyDetails::BuyerPartyDetails() : ComplexTag("BuyerPartyDetails", 18)
{
    addSubtag(new SimpleTag("BuyerPartyIdentifier", 0));
    addSubtag(new SimpleTag("BuyerOrganisationName", 1));
    // TODO more BuyerOrganisationNames
    addSubtag(new SimpleTag("BuyerOrganisationTradingName", 2));
    addSubtag(new SimpleTag("BuyerOrganisationDepartment", 3));
    addSubtag(new SimpleTag("BuyerOrganisationTaxCode", 4));
    addSubtag(new SimpleTag("BuyerCode", 5));
    addSubtag(new BuyerPostalAddressDetails);

    //addSubtag(new SimpleTag("BuyerPartyIdentifierUrlText"));
    //addSubtag(new SimpleTag("BuyerOrganisationTaxCodeUrlText"));
}
