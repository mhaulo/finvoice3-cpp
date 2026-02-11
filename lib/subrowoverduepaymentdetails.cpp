#include "subrowoverduepaymentdetails.h"

#include "simpletag.h"

SubRowOverDuePaymentDetails::SubRowOverDuePaymentDetails() : ComplexTag("SubRowOverDuePaymentDetails")
{
    addSubtag(new SimpleTag("SubRowOriginalInvoiceIdentifier"));
    addSubtag(new SimpleTag("SubRowOriginalInvoiceDate"));
    addSubtag(new SimpleTag("SubRowOriginalDueDate"));
    addSubtag(new SimpleTag("SubRowOriginalInvoiceTotalAmount"));
    addSubtag(new SimpleTag("SubRowOriginalEpiRemittanceInfoIdentifier"));
    addSubtag(new SimpleTag("SubRowPaidVatExcludedAmount"));
    addSubtag(new SimpleTag("SubRowPaidVatIncludedAmount"));
    addSubtag(new SimpleTag("SubRowPaidDate"));
    addSubtag(new SimpleTag("SubRowUnPaidVatExcludedAmount"));
    addSubtag(new SimpleTag("SubRowUnPaidVatIncludedAmount"));
    addSubtag(new SimpleTag("SubRowCollectionDate"));
    addSubtag(new SimpleTag("SubRowCollectionQuantity"));
    addSubtag(new SimpleTag("SubRowCollectionChargeAmount"));
    addSubtag(new SimpleTag("SubRowInterestRate"));
    addSubtag(new SimpleTag("SubRowInterestStartDate"));
    addSubtag(new SimpleTag("SubRowInterestEndDate"));
    addSubtag(new SimpleTag("SubRowInterestPeriodText"));
    addSubtag(new SimpleTag("SubRowInterestDateNumber"));
    addSubtag(new SimpleTag("SubRowInterestChargeAmount"));
    addSubtag(new SimpleTag("SubRowInterestChargeVatAmount"));
}
