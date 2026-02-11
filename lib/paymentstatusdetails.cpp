#include "paymentstatusdetails.h"

#include "simpletag.h"
#include "paymentstatuscode.h"

PaymentStatusDetails::PaymentStatusDetails() : ComplexTag("PaymentStatusDetails")
{
    addSubtag(new PaymentStatusCode);
    addSubtag(new SimpleTag("PaymentMethodText"));
}
