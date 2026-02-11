#include "paymentcardinfo.h"

#include "simpletag.h"

PaymentCardInfo::PaymentCardInfo() : ComplexTag("PaymentCardInfo")
{
    addSubtag(new SimpleTag("PrimaryAccountNumber"));
    addSubtag(new SimpleTag("CardHolderName"));
}
