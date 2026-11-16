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

#include "invoicedetails.h"

#include "simpletag.h"
#include "invoicetypecodefi.h"
#include "invoiceclassification.h"
#include "origincode.h"
#include "invoicedobjectid.h"
#include "originalinvoicereference.h"
#include "partyidentifier.h"
#include "definitiondetails.h"
#include "vatpoint.h"
#include "paymenttermsdetails.h"
#include "discountdetails.h"
#include "invoicechargedetails.h"

InvoiceDetails::InvoiceDetails() : ComplexTag("InvoiceDetails", 34)
{
    addSubtag(new InvoiceTypeCodeFi);
    addSubtag(new SimpleTag("InvoiceTypeCodeUN", 1));
    addSubtag(new SimpleTag("InvoiceTypeText", 2));
    addSubtag(new InvoiceClassification);
    addSubtag(new OriginCode);
    addSubtag(new SimpleTag("OriginText", 5));
    addSubtag(new InvoicedObjectId("InvoicedObjectID", 6));
    addSubtag(new SimpleTag("InvoiceNumber", 7));
    addSubtag(new SimpleTag("InvoiceDate", 8));
    addSubtag(new SimpleTag("OriginalInvoiceNumber", 9));
    addSubtag(new SimpleTag("OriginalInvoiceDate", 10));
    addSubtag(new OriginalInvoiceReference("OriginalInvoiceReference", 11));
    addSubtag(new SimpleTag("InvoicingPeriodStartDate", 12));
    addSubtag(new SimpleTag("InvoicingPeriodEndDate", 13));
    addSubtag(new SimpleTag("SellerReferenceIdentifier", 14));
    addSubtag(new SimpleTag("SellerReferenceIdentifierUrlText", 15));
    addSubtag(new PartyIdentifier("BuyersSellerIdentifier", 16));
    addSubtag(new PartyIdentifier("SellersBuyerIdentifier", 17));
    addSubtag(new SimpleTag("OrderIdentifier", 18));
    addSubtag(new SimpleTag("OrderIdentifierUrlText", 19));
    addSubtag(new SimpleTag("OrderDate", 20));
    addSubtag(new SimpleTag("OrdererName", 21));
    addSubtag(new SimpleTag("SalesPersonName", 22));
    addSubtag(new SimpleTag("OrderConfirmationIdentifier", 23));
    addSubtag(new SimpleTag("OrderConfirmationDate", 24));
    addSubtag(new SimpleTag("AgreementIdentifier", 25));
    addSubtag(new SimpleTag("AgreementIdentifierUrlText", 26));
    addSubtag(new SimpleTag("AgreementTypeText", 27));
    addSubtag(new SimpleTag("AgreementTypeCode", 28));
    addSubtag(new SimpleTag("AgreementDate", 29));
    addSubtag(new SimpleTag("NotificationIdentifier", 30));
    addSubtag(new SimpleTag("NotificationDate", 31));
    addSubtag(new SimpleTag("RegistrationNumberIdentifier", 32));
    addSubtag(new SimpleTag("ControllerIdentifier", 33));
    addSubtag(new SimpleTag("ControllerName", 34));
    addSubtag(new SimpleTag("ControlDate", 35));
    addSubtag(new SimpleTag("BuyerReferenceIdentifier", 36));
    addSubtag(new SimpleTag("ProjectReferenceIdentifier", 37));
    addSubtag(new DefinitionDetails);
    addSubtag(new SimpleTag("RowsTotalVatExcludedAmount", 39));
    addSubtag(new SimpleTag("DiscountsTotalVatExcludedAmount", 40));
    addSubtag(new SimpleTag("ChargesTotalVatExcludedAmount", 41));
    addSubtag(new SimpleTag("InvoiceTotalVatExcludedAmount", 42));
    addSubtag(new SimpleTag("InvoiceTotalVatAmount", 43));
    addSubtag(new SimpleTag("InvoiceTotalVatAccountingAmount", 44));
    addSubtag(new SimpleTag("InvoiceTotalVatIncludedAmount", 45));
    addSubtag(new SimpleTag("InvoiceTotalRoundoffAmount", 46));
    addSubtag(new SimpleTag("InvoicePaidAmount", 47));
    addSubtag(new SimpleTag("ExchangeRate", 48));
    addSubtag(new SimpleTag("OtherCurrencyAmountVatExcludedAmount", 49));
    addSubtag(new SimpleTag("OtherCurrencyAmountVatIncludedAmount", 50));
    addSubtag(new SimpleTag("CreditLimitAmount", 51));
    addSubtag(new SimpleTag("CreditInterestPercent", 52));
    addSubtag(new SimpleTag("OperationLimitAmount", 53));
    addSubtag(new SimpleTag("MonthlyAmount", 54));
    addSubtag(new SimpleTag("ShortProposedAccountIdentifier", 55));
    addSubtag(new SimpleTag("NormalProposedAccountIdentifier", 56));
    addSubtag(new SimpleTag("ProposedAccountText", 57));
    addSubtag(new SimpleTag("AccountDimensionText", 58));
    addSubtag(new SimpleTag("SellerAccountText", 59));
    addSubtag(new VatPoint);
    addSubtag(new SimpleTag("InvoiceFreeText", 62));
    addSubtag(new SimpleTag("InvoiceVatFreeText", 63));
    addSubtag(new PaymentTermsDetails);
    addSubtag(new DiscountDetails);
    addSubtag(new InvoiceChargeDetails);
    addSubtag(new SimpleTag("TenderReference", 67));
}
