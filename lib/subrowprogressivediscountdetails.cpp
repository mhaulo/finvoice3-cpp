#include "subrowprogressivediscountdetails.h"

#include "simpletag.h"

SubRowProgressiveDiscountDetails::SubRowProgressiveDiscountDetails() : ComplexTag("SubRowProgressiveDiscountDetails", 70)
{
    addSubtag(new SimpleTag("SubRowDiscountPercent", 0));
    addSubtag(new SimpleTag("SubRowDiscountAmount", 1));
    addSubtag(new SimpleTag("SubRowDiscountBaseAmount", 2));
    addSubtag(new SimpleTag("SubRowDiscountTypeCode", 3));
    addSubtag(new SimpleTag("SubRowDiscountTypeText", 4));
}
