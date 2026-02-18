#include "rowoverduepaymentdetails.h"

#include "simpletag.h"

RowOverDuePaymentDetails::RowOverDuePaymentDetails() : ComplexTag("RowOverDuePaymentDetails", 53)
{
    addSubtag(new SimpleTag("RowOriginalInvoiceIdentifier", 0));
    addSubtag(new SimpleTag("RowOriginalInvoiceDate", 1));
    addSubtag(new SimpleTag("RowOriginalDueDate", 2));
    addSubtag(new SimpleTag("RowOriginalInvoiceTotalAmount", 3));
    addSubtag(new SimpleTag("RowOriginalEpiRemittanceInfoIdentifier", 4));
    addSubtag(new SimpleTag("RowPaidVatExcludedAmount", 5));
    addSubtag(new SimpleTag("RowPaidVatIncludedAmount", 6));
    addSubtag(new SimpleTag("RowPaidDate", 7));
    addSubtag(new SimpleTag("RowUnPaidVatExcludedAmount", 8));
    addSubtag(new SimpleTag("RowUnPaidVatIncludedAmount", 9));
    addSubtag(new SimpleTag("RowCollectionDate", 10));
    addSubtag(new SimpleTag("RowCollectionuQuantity", 11));
    addSubtag(new SimpleTag("RowCollectionChargeAmount", 12));
    addSubtag(new SimpleTag("RowInterestRate", 13));
    addSubtag(new SimpleTag("RowInterestStartDate", 14));
    addSubtag(new SimpleTag("RowInterestEndDate", 15));
    addSubtag(new SimpleTag("RowInterestPeriodText", 16));
    addSubtag(new SimpleTag("RowInterestDateNumber", 17));
    addSubtag(new SimpleTag("RowInterestChargeAmount", 18));
    addSubtag(new SimpleTag("RowInterestChargeVatAmount", 19));
}
