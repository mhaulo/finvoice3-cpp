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
