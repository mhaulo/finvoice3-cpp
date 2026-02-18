#include "sellercommunicationdetails.h"

#include "simpletag.h"

SellerCommunicationDetails::SellerCommunicationDetails() : ComplexTag("SellerCommunicationDetails", 7)
{
    addSubtag(new SimpleTag("SellerPhoneNumberIdentifier", 0));
    addSubtag(new SimpleTag("SellerEmailaddressIdentifier", 1));
}
