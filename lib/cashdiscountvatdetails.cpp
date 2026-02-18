#include "cashdiscountvatdetails.h"

#include "simpletag.h"

CashDiscountVatDetails::CashDiscountVatDetails() : ComplexTag("CashDiscountVatDetails", 8)
{
    addSubtag(new SimpleTag("CashDiscountVatPercent", 0));
    addSubtag(new SimpleTag("CashDiscountVatAmount", 1));
}
