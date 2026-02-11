#include "paymentoverduefinedetails.h"

#include "simpletag.h"

PaymentOverDueFineDetails::PaymentOverDueFineDetails() : ComplexTag("PaymentOverDueFineDetails")
{
    addSubtag(new SimpleTag("PaymentOverDueFineFreeText"));
    addSubtag(new SimpleTag("PaymentOverDueFinePercent"));
    addSubtag(new SimpleTag("PaymentOverDueFixedAmount"));
}
