#include "deliveryperioddetails.h"

#include "simpletag.h"

DeliveryPeriodDetails::DeliveryPeriodDetails() : ComplexTag("DeliveryPeriodDetails")
{
    addSubtag(new SimpleTag("StartDate"));
    addSubtag(new SimpleTag("EndDate"));
}
