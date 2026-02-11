#include "subrowprogressivediscountdetails.h"

#include "simpletag.h"

SubRowProgressiveDiscountDetails::SubRowProgressiveDiscountDetails() : ComplexTag("SubRowProgressiveDiscountDetails")
{
    addSubtag(new SimpleTag("SubRowDiscountPercent"));
    addSubtag(new SimpleTag("SubRowDiscountAmount"));
    addSubtag(new SimpleTag("SubRowDiscountBaseAmount"));
    addSubtag(new SimpleTag("SubRowDiscountTypeCode"));
    addSubtag(new SimpleTag("SubRowDiscountTypeText"));
}
