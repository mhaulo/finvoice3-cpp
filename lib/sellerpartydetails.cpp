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

#include "sellerpartydetails.h"

#include "simpletag.h"
#include "sellerpostaladdressdetails.h"

SellerPartyDetails::SellerPartyDetails() : ComplexTag("SellerPartyDetails", 1)
{
    addSubtag(new SimpleTag("SellerPartyIdentifier", 0));
    addSubtag(new SimpleTag("SellerPartyIdentifierUrlText", 1));
    addSubtag(new SimpleTag("SellerOrganisationName", 2));
    // TODO more SellerOrganisationNames

    addSubtag(new SimpleTag("SellerOrganisationTradingName", 3));
    addSubtag(new SimpleTag("SellerOrganisationDepartment", 4));
    addSubtag(new SimpleTag("SellerOrganisationTaxCode", 5));
    addSubtag(new SimpleTag("SellerOrganisationTaxCodeUrlText", 6));
    addSubtag(new SimpleTag("SellerCode", 7));
    addSubtag(new SellerPostalAddressDetails);


}
