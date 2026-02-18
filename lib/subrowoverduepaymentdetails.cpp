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
