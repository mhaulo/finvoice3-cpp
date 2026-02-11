#include "sellercommunicationdetails.h"

#include "simpletag.h"

SellerCommunicationDetails::SellerCommunicationDetails() : ComplexTag("SellerCommunicationDetails")
{
    addSubtag(new SimpleTag("SellerPhoneNumberIdentifier"));
    addSubtag(new SimpleTag("SellerEmailaddressIdentifier"));
}
