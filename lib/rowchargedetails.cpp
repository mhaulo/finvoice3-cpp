#include "rowchargedetails.h"

#include "simpletag.h"

RowChargeDetails::RowChargeDetails(std::string name, short weight) : ComplexTag(name, weight)
{
    addSubtag(new SimpleTag("ReasonText", 0));
    addSubtag(new SimpleTag("ReasonCode", 1));
    addSubtag(new SimpleTag("Percent", 2));
    addSubtag(new SimpleTag("Amount", 3));
    addSubtag(new SimpleTag("BaseAmount", 4));
}
