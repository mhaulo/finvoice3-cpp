#include "paymentoverduefinedetails.h"

#include "simpletag.h"

PaymentOverDueFineDetails::PaymentOverDueFineDetails() : ComplexTag("PaymentOverDueFineDetails", 10)
{
    addSubtag(new SimpleTag("PaymentOverDueFineFreeText", 0));
    addSubtag(new SimpleTag("PaymentOverDueFinePercent", 1));
    addSubtag(new SimpleTag("PaymentOverDueFixedAmount", 2));
}
