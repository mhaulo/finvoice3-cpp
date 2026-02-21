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

#include "partialpaymentdetails.h"

#include "simpletag.h"

PartialPaymentDetails::PartialPaymentDetails() : ComplexTag("PartialPaymentDetails", 38)
{
    addSubtag(new SimpleTag("PaidAmount", 0));
    addSubtag(new SimpleTag("PaidVatExcludedAmount", 1));
    addSubtag(new SimpleTag("UnPaidAmount", 2));
    addSubtag(new SimpleTag("UnPaidVatExcludedAmount", 3));
    addSubtag(new SimpleTag("InterestPercent", 4));
    addSubtag(new SimpleTag("ProcessingCostAmount", 5));
    addSubtag(new SimpleTag("PartialPaymentVatIncludedAmount", 6));
    addSubtag(new SimpleTag("PartialPaymentVatExcludedAmount", 7));
    addSubtag(new SimpleTag("PartialPaymentDueDate", 8));
    addSubtag(new SimpleTag("PartialPaymentReferenceIdentifier", 9));
}
