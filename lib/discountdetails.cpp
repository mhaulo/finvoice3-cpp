#include "discountdetails.h"

#include "simpletag.h"
#include "vatcategorycode.h"

DiscountDetails::DiscountDetails() : ComplexTag("DiscountDetails")
{
    addSubtag(new SimpleTag("FreeText"));
    addSubtag(new SimpleTag("ReasonCode"));
    addSubtag(new SimpleTag("Percent"));
    addSubtag(new SimpleTag("Amount"));
    addSubtag(new SimpleTag("BaseAmount"));
    addSubtag(new SimpleTag("VatRatePercent"));
    addSubtag(new VatCategoryCode);
}
