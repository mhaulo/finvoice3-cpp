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

#include "invoicesenderpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"

InvoiceSenderPartyDetails::InvoiceSenderPartyDetails() : ComplexTag("InvoiceSenderPartyDetails", 9)
{
    addSubtag(new PartyLegalRegId("InvoiceSenderPartyIdentifier", 0));
    addSubtag(new SimpleTag("InvoiceSenderOrganisationName", 1));
    addSubtag(new SimpleTag("InvoiceSenderOrganisationTaxCode", 2));
    addSubtag(new PartyIdentifier("InvoiceSenderCode", 3));
}
