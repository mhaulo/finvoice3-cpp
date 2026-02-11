#include "buyercommunicationdetails.h"

#include "simpletag.h"

BuyerCommunicationDetails::BuyerCommunicationDetails() : ComplexTag("BuyerCommunicationDetails")
{
    addSubtag(new SimpleTag("BuyerPhoneNumberIdentifier"));
    addSubtag(new SimpleTag("BuyerEmailaddressIdentifier"));
}
