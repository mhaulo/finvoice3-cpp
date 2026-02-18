#include "vatspecificationdetails.h"

#include "simpletag.h"

VatSpecificationDetails::VatSpecificationDetails() : ComplexTag("VatSpecificationDetails", 61)
{
    addSubtag(new SimpleTag("VatBaseAmount", 0));
    addSubtag(new SimpleTag("VatRatePercent", 1));
    addSubtag(new SimpleTag("VatCode", 2));
    addSubtag(new SimpleTag("VatRateAmount", 3));
    addSubtag(new SimpleTag("VatFreeText", 4));
    addSubtag(new SimpleTag("VatExemptionReasonCode", 5));
}
