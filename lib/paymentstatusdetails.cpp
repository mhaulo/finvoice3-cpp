#include "paymentstatusdetails.h"

#include "simpletag.h"
#include "paymentstatuscode.h"

PaymentStatusDetails::PaymentStatusDetails() : ComplexTag("PaymentStatusDetails", 37)
{
    addSubtag(new PaymentStatusCode);
    addSubtag(new SimpleTag("PaymentMethodText", 1));
}
