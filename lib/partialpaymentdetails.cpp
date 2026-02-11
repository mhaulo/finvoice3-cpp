#include "partialpaymentdetails.h"

#include "simpletag.h"

PartialPaymentDetails::PartialPaymentDetails() : ComplexTag("PartialPaymentDetails")
{
    addSubtag(new SimpleTag("PaidAmount"));
    addSubtag(new SimpleTag("PaidVatExcludedAmount"));
    addSubtag(new SimpleTag("UnPaidAmount"));
    addSubtag(new SimpleTag("UnPaidVatExcludedAmount"));
    addSubtag(new SimpleTag("InterestPercent"));
    addSubtag(new SimpleTag("ProcessingCostAmount"));
    addSubtag(new SimpleTag("PartialPaymentVatIncludedAmount"));
    addSubtag(new SimpleTag("PartialPaymentVatExcludedAmount"));
    addSubtag(new SimpleTag("PartialPaymentDueDate"));
    addSubtag(new SimpleTag("PartialPaymentReferenceIdentifier"));
}
