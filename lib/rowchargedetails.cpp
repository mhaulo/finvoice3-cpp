#include "rowchargedetails.h"

#include "simpletag.h"

RowChargeDetails::RowChargeDetails(std::string name) : ComplexTag(name)
{
    addSubtag(new SimpleTag("ReasonText"));
    addSubtag(new SimpleTag("ReasonCode"));
    addSubtag(new SimpleTag("Percent"));
    addSubtag(new SimpleTag("Amount"));
    addSubtag(new SimpleTag("BaseAmount"));
}
