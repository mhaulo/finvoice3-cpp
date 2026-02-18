#include "paymentcardinfo.h"

#include "simpletag.h"

PaymentCardInfo::PaymentCardInfo() : ComplexTag("PaymentCardInfo", 35)
{
    addSubtag(new SimpleTag("PrimaryAccountNumber", 0));
    addSubtag(new SimpleTag("CardHolderName", 1));
}
