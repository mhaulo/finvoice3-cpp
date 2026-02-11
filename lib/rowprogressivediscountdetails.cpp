#include "rowprogressivediscountdetails.h"

#include "simpletag.h"

RowProgressiveDiscountDetails::RowProgressiveDiscountDetails() : ComplexTag("RowProgressiveDiscountDetails")
{
    addSubtag(new SimpleTag("RowDiscountPercent"));
    addSubtag(new SimpleTag("RowDiscountAmount"));
    addSubtag(new SimpleTag("RowDiscountBaseAmount"));
    addSubtag(new SimpleTag("RowDiscountTypeCode"));
    addSubtag(new SimpleTag("RowDiscountTypeText"));
}
