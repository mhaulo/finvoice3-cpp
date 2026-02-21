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

#include "epipaymentinstructiondetails.h"

#include "simpletag.h"
#include "epiremittanceinfoidentifier.h"
#include "epiamount.h"
#include "epicharge.h"

EpiPaymentInstructionDetails::EpiPaymentInstructionDetails() : ComplexTag("EpiPaymentInstructionDetails", 2)
{
    addSubtag(new SimpleTag("EpiPaymentInstructionId", 0));
    addSubtag(new SimpleTag("EpiTransactionTypeCode", 1));
    addSubtag(new SimpleTag("EpiInstructionCode", 2));
    addSubtag(new EpiRemittanceInfoIdentifier);
    addSubtag(new EpiAmount("EpiInstructedAmount", 4));
    addSubtag(new EpiCharge);
    addSubtag(new SimpleTag("EpiDateOptionDate", 6));
    addSubtag(new SimpleTag("EpiPaymentMeansCode", 7));
    addSubtag(new SimpleTag("EpiPaymentMeansText", 8));
}
