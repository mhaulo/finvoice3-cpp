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

#include "subrowoverduepaymentdetails.h"

#include "simpletag.h"

SubRowOverDuePaymentDetails::SubRowOverDuePaymentDetails() : ComplexTag("SubRowOverDuePaymentDetails", 52)
{
    addSubtag(new SimpleTag("SubRowOriginalInvoiceIdentifier", 0));
    addSubtag(new SimpleTag("SubRowOriginalInvoiceDate", 1));
    addSubtag(new SimpleTag("SubRowOriginalDueDate", 2));
    addSubtag(new SimpleTag("SubRowOriginalInvoiceTotalAmount", 3));
    addSubtag(new SimpleTag("SubRowOriginalEpiRemittanceInfoIdentifier", 4));
    addSubtag(new SimpleTag("SubRowPaidVatExcludedAmount", 5));
    addSubtag(new SimpleTag("SubRowPaidVatIncludedAmount", 6));
    addSubtag(new SimpleTag("SubRowPaidDate", 7));
    addSubtag(new SimpleTag("SubRowUnPaidVatExcludedAmount", 8));
    addSubtag(new SimpleTag("SubRowUnPaidVatIncludedAmount", 9));
    addSubtag(new SimpleTag("SubRowCollectionDate", 10));
    addSubtag(new SimpleTag("SubRowCollectionQuantity", 11));
    addSubtag(new SimpleTag("SubRowCollectionChargeAmount", 12));
    addSubtag(new SimpleTag("SubRowInterestRate", 13));
    addSubtag(new SimpleTag("SubRowInterestStartDate", 14));
    addSubtag(new SimpleTag("SubRowInterestEndDate", 15));
    addSubtag(new SimpleTag("SubRowInterestPeriodText", 16));
    addSubtag(new SimpleTag("SubRowInterestDateNumber", 17));
    addSubtag(new SimpleTag("SubRowInterestChargeAmount", 18));
    addSubtag(new SimpleTag("SubRowInterestChargeVatAmount", 19));
}
