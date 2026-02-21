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

#include "subinvoicerow.h"

#include "simpletag.h"
#include "invoicedobjectid.h"
#include "articlegroupidentifier.h"
#include "eancode.h"
#include "subrowdefinitiondetails.h"
#include "originalinvoicereference.h"
#include "subrowoverduepaymentdetails.h"
#include "subrowanypartydetails.h"
#include "subrowdeliverydetails.h"
#include "subrowprogressivediscountdetails.h"
#include "rowchargedetails.h"
#include "transactiondetails.h"

SubInvoiceRow::SubInvoiceRow() : ComplexTag("SubInvoiceRow", 999)
{
    addSubtag(new SimpleTag("SubIdentifier", 0));
    addSubtag(new SimpleTag("SubRowPositionIdentifier", 1));
    addSubtag(new InvoicedObjectId("SubInvoicedObjectID", 2));
    addSubtag(new SimpleTag("SubArticleIdentifier", 3));
    addSubtag(new ArticleGroupIdentifier("SubArticleGroupIdentifier", 4));
    addSubtag(new SimpleTag("SubArticleName", 5));
    addSubtag(new SimpleTag("SubArticleDescription", 6));
    addSubtag(new SimpleTag("SubArticleInfoUrlText", 7));
    addSubtag(new SimpleTag("SubBuyerArticleIdentifier", 8));
    addSubtag(new EanCode("SubEanCode", 9));
    addSubtag(new SimpleTag("SubRowRegistrationNumberIdentifier", 10));
    addSubtag(new SimpleTag("SubSerialNumberIdentifier", 11));
    addSubtag(new SimpleTag("SubRowActionCode", 12));
    addSubtag(new SubRowDefinitionDetails);
    addSubtag(new SimpleTag("SubOfferedQuantity", 14));
    addSubtag(new SimpleTag("SubDeliveredQuantity", 15));
    addSubtag(new SimpleTag("SubOrderedQuantity", 16));
    addSubtag(new SimpleTag("SubConfirmedQuantity", 17));
    addSubtag(new SimpleTag("SubPostDeliveredQuantity", 18));
    addSubtag(new SimpleTag("SubInvoicedQuantity", 19));
    addSubtag(new SimpleTag("SubCreditRequestedQuantity", 20));
    addSubtag(new SimpleTag("SubReturnedQuantity", 21));
    addSubtag(new SimpleTag("SubStartDate", 22));
    addSubtag(new SimpleTag("SubEndDate", 23));
    addSubtag(new SimpleTag("SubUnitPriceAmount", 24));
    addSubtag(new SimpleTag("SubUnitPriceDiscountAmount", 25));
    addSubtag(new SimpleTag("SubUnitPriceNetAmount", 26));
    addSubtag(new SimpleTag("SubUnitPriceVatIncludedAmount", 27));
    addSubtag(new SimpleTag("SubUnitPriceBaseQuantity", 28));
    addSubtag(new SimpleTag("SubRowIdentifier", 29));
    addSubtag(new SimpleTag("SubRowIdentifierUrlText", 30));
    addSubtag(new SimpleTag("SubRowIdentifierDate", 31));
    addSubtag(new SimpleTag("SubRowOrdererName", 32));
    addSubtag(new SimpleTag("SubRowSalesPersonName", 33));
    addSubtag(new SimpleTag("SubRowOrderConfirmationIdentifier", 34));
    addSubtag(new SimpleTag("SubRowOrderConfirmationDate", 35));
    addSubtag(new SimpleTag("SubOriginalInvoiceNumber", 36));
    addSubtag(new SimpleTag("SubOriginalInvoiceDate", 37));
    addSubtag(new OriginalInvoiceReference("SubOriginalInvoiceReference", 38));
    addSubtag(new SimpleTag("SubRowDeliveryIdentifer", 39));
    addSubtag(new SimpleTag("SubRowDeliveryIdentifierUrlText", 40));
    addSubtag(new SimpleTag("SubRowDeliveryDate", 41));
    addSubtag(new SimpleTag("SubRowQuotationIdentifier", 42));
    addSubtag(new SimpleTag("SubRowQuotationIdentifierUrlText", 43));
    addSubtag(new SimpleTag("SubRowAgreementIdentifier", 44));
    addSubtag(new SimpleTag("SubRowAgreementIdentifierUrlText", 45));
    addSubtag(new SimpleTag("SubRowRequestOfQuotationIdentifier", 46));
    addSubtag(new SimpleTag("SubRowRequestOfQuotationIdentifierUrlText", 47));
    addSubtag(new SimpleTag("SubRowPriceListIdentifier", 48));
    addSubtag(new SimpleTag("SubRowPriceListIdentifierUrlText", 49));
    addSubtag(new SimpleTag("SubRowBuyerReferenceIdentifer", 50));
    addSubtag(new SimpleTag("SubRowProjectReferenceIdentifier", 51));
    addSubtag(new SubRowOverDuePaymentDetails);
    addSubtag(new SubRowAnyPartyDetails);
    addSubtag(new SubRowDeliveryDetails);
    addSubtag(new SimpleTag("SubRowShortProposedAccountIdentifier", 55));
    addSubtag(new SimpleTag("SubRowNormalProposedAccountIdentifier", 56));
    addSubtag(new SimpleTag("SubRowProposedAccountText", 57));
    addSubtag(new SimpleTag("SubRowAccountDimensionText", 58));
    addSubtag(new SimpleTag("SubRowSellerAccountText", 59));
    addSubtag(new SimpleTag("SubRowFreeText", 60));
    addSubtag(new SimpleTag("SubRowUsedQuantity", 61));
    addSubtag(new SimpleTag("SubRowPreviousMeterReadingDate", 62));
    addSubtag(new SimpleTag("SubRowLatestMeterReadingText", 63));
    addSubtag(new SimpleTag("SubRowCalculatedQuantity", 64));
    addSubtag(new SimpleTag("SubRowAveragePriceAmount", 65));
    addSubtag(new SimpleTag("SubRowDiscountPercent", 66));
    addSubtag(new SimpleTag("SubRowDiscountBaseAmount", 67));
    addSubtag(new SimpleTag("SubRowDiscountTypeCode", 68));
    addSubtag(new SimpleTag("SubRowDiscountTypeText", 69));
    addSubtag(new SubRowProgressiveDiscountDetails);
    addSubtag(new RowChargeDetails("SubRowChargeDetails", 71));
    addSubtag(new SimpleTag("SubRowVatRatePercent", 72));
    addSubtag(new SimpleTag("SubRowVatCode", 73));
    addSubtag(new SimpleTag("SubRowVatAmount", 74));
    addSubtag(new SimpleTag("SubRowVatExcludedAmount", 75));
    addSubtag(new SimpleTag("SubRowAmount", 76));
    addSubtag(new TransactionDetails("SubRowTransactionDetails", 77));
}
