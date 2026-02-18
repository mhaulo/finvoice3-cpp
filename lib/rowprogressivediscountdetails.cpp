#include "rowprogressivediscountdetails.h"

#include "simpletag.h"

RowProgressiveDiscountDetails::RowProgressiveDiscountDetails() : ComplexTag("RowProgressiveDiscountDetails", 72)
{
    addSubtag(new SimpleTag("RowDiscountPercent", 0));
    addSubtag(new SimpleTag("RowDiscountAmount", 1));
    addSubtag(new SimpleTag("RowDiscountBaseAmount", 2));
    addSubtag(new SimpleTag("RowDiscountTypeCode", 3));
    addSubtag(new SimpleTag("RowDiscountTypeText", 4));
}
