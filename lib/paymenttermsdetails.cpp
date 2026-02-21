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

#include "paymenttermsdetails.h"

#include "simpletag.h"
#include "headervalue.h"
#include "cashdiscountvatdetails.h"
#include "paymentoverduefinedetails.h"

PaymentTermsDetails::PaymentTermsDetails() : ComplexTag("PaymentTermsDetails", 64)
{
    addSubtag(new SimpleTag("PaymentTermsFreeText", 0));
    addSubtag(new HeaderValue("FreeText", 1));
    addSubtag(new SimpleTag("InvoiceDueDate", 2));
    addSubtag(new SimpleTag("CashDiscountDate", 3));
    addSubtag(new SimpleTag("CashDiscountBaseAmount", 4));
    addSubtag(new SimpleTag("CashDiscountPercent", 5));
    addSubtag(new SimpleTag("CashDiscountAmount", 6));
    addSubtag(new SimpleTag("CashDiscountExcludingVatAmount", 7));
    addSubtag(new CashDiscountVatDetails);
    addSubtag(new SimpleTag("ReducedInvoiceVatIncludedAmount", 9));
    addSubtag(new PaymentOverDueFineDetails);
}
