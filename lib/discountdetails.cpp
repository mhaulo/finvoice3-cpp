#include "discountdetails.h"

#include "simpletag.h"
#include "vatcategorycode.h"

DiscountDetails::DiscountDetails() : ComplexTag("DiscountDetails", 65)
{
    addSubtag(new SimpleTag("FreeText", 0));
    addSubtag(new SimpleTag("ReasonCode", 1));
    addSubtag(new SimpleTag("Percent", 2));
    addSubtag(new SimpleTag("Amount", 3));
    addSubtag(new SimpleTag("BaseAmount", 4));
    addSubtag(new VatCategoryCode(5));
    addSubtag(new SimpleTag("VatRatePercent", 6));
}
