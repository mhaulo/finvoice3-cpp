#include "cashdiscountvatdetails.h"

#include "simpletag.h"

CashDiscountVatDetails::CashDiscountVatDetails() : ComplexTag("CashDiscountVatDetails")
{
    addSubtag(new SimpleTag("CashDiscountVatPercent"));
    addSubtag(new SimpleTag("CashDiscountVatAmount"));
}
