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

#include "sellerinformationdetails.h"

#include "simpletag.h"
#include "sellerofficialpostaladdressdetails.h"
#include "invoicerecipientdetails.h"
#include "selleraccountdetails.h"

SellerInformationDetails::SellerInformationDetails() : ComplexTag("SellerInformationDetails", 8)
{
    addSubtag(new SellerOfficialPostalAddressDetails);
    addSubtag(new SimpleTag("SellerHomeTownName", 1));
    addSubtag(new SimpleTag("SellerVatRegistrationText", 2));
    addSubtag(new SimpleTag("SellerVatRegistrationDate", 3));
    addSubtag(new SimpleTag("SellerTaxRegistrationText", 4));
    addSubtag(new SimpleTag("SellerAdditionalLegalInfo", 5));
    addSubtag(new SimpleTag("SellerPhoneNumber", 6));
    addSubtag(new SimpleTag("SellerFaxNumber", 7));
    addSubtag(new SimpleTag("SellerCommonEmailaddressIdentifier", 8));
    addSubtag(new SimpleTag("SellerWebaddressIdentifier", 9));
    addSubtag(new SimpleTag("SellerFreeText", 10));
    addSubtag(new SellerAccountDetails);
    // TODO more SellerAccountDetails
    addSubtag(new InvoiceRecipientDetails);
}
