#include "buyercommunicationdetails.h"

#include "simpletag.h"

BuyerCommunicationDetails::BuyerCommunicationDetails() : ComplexTag("BuyerCommunicationDetails", 24)
{
    addSubtag(new SimpleTag("BuyerPhoneNumberIdentifier", 0));
    addSubtag(new SimpleTag("BuyerEmailaddressIdentifier", 1));
}
