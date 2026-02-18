#include "deliverycommunicationdetails.h"

#include "simpletag.h"

DeliveryCommunicationDetails::DeliveryCommunicationDetails() : ComplexTag("DeliveryCommunicationDetails", 31)
{
    addSubtag(new SimpleTag("DeliveryPhoneNumberIdentifier", 0));
    addSubtag(new SimpleTag("DeliveryEmailaddressIdentifier", 1));
}
