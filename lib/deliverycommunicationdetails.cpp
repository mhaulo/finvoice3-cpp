#include "deliverycommunicationdetails.h"

#include "simpletag.h"

DeliveryCommunicationDetails::DeliveryCommunicationDetails() : ComplexTag("DeliveryCommunicationDetails")
{
    addSubtag(new SimpleTag("DeliveryPhoneNumberIdentifier"));
    addSubtag(new SimpleTag("DeliveryEmailaddressIdentifier"));
}
