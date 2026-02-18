#include "deliveryperioddetails.h"

#include "simpletag.h"

DeliveryPeriodDetails::DeliveryPeriodDetails() : ComplexTag("DeliveryPeriodDetails", 1)
{
    addSubtag(new SimpleTag("StartDate", 0));
    addSubtag(new SimpleTag("EndDate", 1));
}
