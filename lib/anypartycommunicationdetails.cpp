#include "anypartycommunicationdetails.h"
#include "simpletag.h"

AnyPartyCommunicationDetails::AnyPartyCommunicationDetails() : ComplexTag("AnyPartyCommunicationDetails", 9)
{
    addSubtag(new SimpleTag("AnyPartyPhoneNumberIdentifier", 0));
    addSubtag(new SimpleTag("AnyPartyEmailaddressIdentifier", 1));
}
