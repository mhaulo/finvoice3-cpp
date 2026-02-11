#include "rowoverduepaymentdetails.h"

#include "simpletag.h"

RowOverDuePaymentDetails::RowOverDuePaymentDetails() : ComplexTag("RowOverDuePaymentDetails")
{
    addSubtag(new SimpleTag("RowOriginalInvoiceIdentifier"));
    addSubtag(new SimpleTag("RowOriginalInvoiceDate"));
    addSubtag(new SimpleTag("RowOriginalDueDate"));
    addSubtag(new SimpleTag("RowOriginalInvoiceTotalAmount"));
    addSubtag(new SimpleTag("RowOriginalEpiRemittanceInfoIdentifier"));
    addSubtag(new SimpleTag("RowPaidVatExcludedAmount"));
    addSubtag(new SimpleTag("RowPaidVatIncludedAmount"));
    addSubtag(new SimpleTag("RowPaidDate"));
    addSubtag(new SimpleTag("RowUnPaidVatExcludedAmount"));
    addSubtag(new SimpleTag("RowUnPaidVatIncludedAmount"));
    addSubtag(new SimpleTag("RowCollectionDate"));
    addSubtag(new SimpleTag("RowCollectionuQuantity"));
    addSubtag(new SimpleTag("RowCollectionChargeAmount"));
    addSubtag(new SimpleTag("RowInterestRate"));
    addSubtag(new SimpleTag("RowInterestStartDate"));
    addSubtag(new SimpleTag("RowInterestEndDate"));
    addSubtag(new SimpleTag("RowInterestPeriodText"));
    addSubtag(new SimpleTag("RowInterestDateNumber"));
    addSubtag(new SimpleTag("RowInterestChargeAmount"));
    addSubtag(new SimpleTag("RowInterestChargeVatAmount"));
}
