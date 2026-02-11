#include "anypartycommunicationdetails.h"
#include "simpletag.h"

AnyPartyCommunicationDetails::AnyPartyCommunicationDetails() : ComplexTag("AnyPartyCommunicationDetails")
{
    addSubtag(new SimpleTag("AnyPartyPhoneNumberIdentifier"));
    addSubtag(new SimpleTag("AnyPartyEmailaddressIdentifier"));
}
