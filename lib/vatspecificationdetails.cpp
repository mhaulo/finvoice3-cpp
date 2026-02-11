#include "vatspecificationdetails.h"

#include "simpletag.h"

VatSpecificationDetails::VatSpecificationDetails() : ComplexTag("VatSpecificationDetails")
{
    addSubtag(new SimpleTag("VatBaseAmount"));
    addSubtag(new SimpleTag("VatRatePercent"));
    addSubtag(new SimpleTag("VatCode"));
    addSubtag(new SimpleTag("VatRateAmount"));
    addSubtag(new SimpleTag("VatFreeText"));
    addSubtag(new SimpleTag("VatExemptionReasonCode"));
}
