#include "invoicerow.h"

#include "simpletag.h"
#include "invoicedobjectid.h"
#include "articlegroupidentifier.h"
#include "eancode.h"
#include "rowdefinitiondetails.h"
#include "originalinvoicereference.h"
#include "rowoverduepaymentdetails.h"
#include "rowanypartydetails.h"
#include "rowdeliverydetails.h"
#include "rowprogressivediscountdetails.h"
#include "rowchargedetails.h"
#include "transactiondetails.h"
#include "subinvoicerow.h"

InvoiceRow::InvoiceRow() : ComplexTag("InvoiceRow", 100)
{
    addSubtag(new SimpleTag("RowSubIdentifier", 0));
    addSubtag(new InvoicedObjectId("InvoicedObjectID", 1));
    addSubtag(new SimpleTag("ArticleIdentifier", 2));
    addSubtag(new ArticleGroupIdentifier("ArticleGroupIdentifier", 3));
    addSubtag(new SimpleTag("ArticleName", 4));
    addSubtag(new SimpleTag("ArticleDescription", 5));
    addSubtag(new SimpleTag("ArticleInfoUrlText", 6));
    addSubtag(new SimpleTag("BuyerArticleIdentifier", 7));
    addSubtag(new EanCode("EanCode", 8));
    addSubtag(new SimpleTag("RowRegistrationNumberIdentifier", 9));
    addSubtag(new SimpleTag("SerialNumberIdentifier", 10));
    addSubtag(new SimpleTag("RowActionCode", 11));
    addSubtag(new RowDefinitionDetails);
    addSubtag(new SimpleTag("OfferedQuantity", 13));
    addSubtag(new SimpleTag("DeliveredQuantity", 14));
    addSubtag(new SimpleTag("OrderedQuantity", 15));
    addSubtag(new SimpleTag("ConfirmedQuantity", 16));
    addSubtag(new SimpleTag("PostDeliveredQuantity", 17));
    addSubtag(new SimpleTag("InvoicedQuantity", 18));
    addSubtag(new SimpleTag("CreditRequestedQuantity", 19));
    addSubtag(new SimpleTag("ReturnedQuantity", 20));
    addSubtag(new SimpleTag("StartDate", 21));
    addSubtag(new SimpleTag("EndDate", 22));
    addSubtag(new SimpleTag("UnitPriceAmount", 23));
    addSubtag(new SimpleTag("UnitPriceDiscountAmount", 24));
    addSubtag(new SimpleTag("UnitPriceNetAmount", 25));
    addSubtag(new SimpleTag("UnitPriceVatIncludedAmount", 26));
    addSubtag(new SimpleTag("UnitPriceBaseQuantity", 27));
    addSubtag(new SimpleTag("RowIdentifier", 28));
    addSubtag(new SimpleTag("RowIdentifierUrlText", 29));
    addSubtag(new SimpleTag("RowOrderPositionIdentifier", 30));
    addSubtag(new SimpleTag("RowIdentifierDate", 31));
    addSubtag(new SimpleTag("RowPositionIdentifier", 32));
    addSubtag(new SimpleTag("OriginalInvoiceNumber", 33));
    addSubtag(new SimpleTag("OriginalInvoiceDate", 34));
    addSubtag(new OriginalInvoiceReference("OriginalInvoiceReference", 35));
    addSubtag(new SimpleTag("RowOrdererName", 36));
    addSubtag(new SimpleTag("RowSalesPersonName", 37));
    addSubtag(new SimpleTag("RowOrderConfirmationIdentifier", 38));
    addSubtag(new SimpleTag("RowOrderConfirmationDate", 39));
    addSubtag(new SimpleTag("RowDeliveryIdentifier", 40));
    addSubtag(new SimpleTag("RowDeliveryIdentifierUrlText", 41));
    addSubtag(new SimpleTag("RowDeliveryDate", 42));
    addSubtag(new SimpleTag("RowQuotationIdentifier", 43));
    addSubtag(new SimpleTag("RowQuotationIdentifierUrlText", 44));
    addSubtag(new SimpleTag("RowAgreementIdentifier", 45));
    addSubtag(new SimpleTag("RowAgreementIdentifierUrlText", 46));
    addSubtag(new SimpleTag("RowRequestOfQuotationIdentifier", 47));
    addSubtag(new SimpleTag("RowRequestOfQuotationIdentifierUrlText", 48));
    addSubtag(new SimpleTag("RowPriceListIdentifier", 49));
    addSubtag(new SimpleTag("RowPriceListIdentifierUrlText", 50));
    addSubtag(new SimpleTag("RowBuyerReferenceIdentifier", 51));
    addSubtag(new SimpleTag("RowProjectReferenceIdentifier", 52));
    addSubtag(new RowOverDuePaymentDetails);
    addSubtag(new RowAnyPartyDetails);
    addSubtag(new RowDeliveryDetails);
    addSubtag(new SimpleTag("RowShortProposedAccountIdentifier", 56));
    addSubtag(new SimpleTag("RowNormalProposedAccountIdentifier", 57));
    addSubtag(new SimpleTag("RowProposedAccountText", 58));
    addSubtag(new SimpleTag("RowAccountDimensionText", 59));
    addSubtag(new SimpleTag("RowSellerAccountText", 60));
    addSubtag(new SimpleTag("RowFreeText", 61));
    addSubtag(new SimpleTag("RowUsedQuantity", 62));
    addSubtag(new SimpleTag("RowPreviousMeterReadingDate", 63));
    addSubtag(new SimpleTag("RowLatestMeterReadingDate", 64));
    addSubtag(new SimpleTag("RowCalculatedQuantity", 65));
    addSubtag(new SimpleTag("RowAveragePriceAmount", 66));
    addSubtag(new SimpleTag("RowDiscountPercent", 67));
    addSubtag(new SimpleTag("RowDiscountAmount", 68));
    addSubtag(new SimpleTag("RowDiscountBaseAmount", 69));
    addSubtag(new SimpleTag("RowDiscountTypeCode", 70));
    addSubtag(new SimpleTag("RowDiscountTypeText", 71));
    addSubtag(new RowProgressiveDiscountDetails);
    addSubtag(new RowChargeDetails("RowChargeDetails", 73));
    addSubtag(new SimpleTag("RowVatRatePercent", 74));
    addSubtag(new SimpleTag("RowVatCode", 75));
    addSubtag(new SimpleTag("RowVatAmount", 76));
    addSubtag(new SimpleTag("RowVatExcludedAmount", 77));
    addSubtag(new SimpleTag("RowAmount", 78));
    addSubtag(new TransactionDetails("RowTransactionDetails", 79));
    // addSubtag(new SubInvoiceRow);
}
