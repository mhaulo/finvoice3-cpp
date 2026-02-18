#include "buyerpartydetails.h"

#include "simpletag.h"
#include "buyerpostaladdressdetails.h"

BuyerPartyDetails::BuyerPartyDetails() : ComplexTag("BuyerPartyDetails", 18)
{
    addSubtag(new SimpleTag("BuyerPartyIdentifier", 0));
    addSubtag(new SimpleTag("BuyerOrganisationName", 1));
    // TODO more BuyerOrganisationNames
    addSubtag(new SimpleTag("BuyerOrganisationTradingName", 2));
    addSubtag(new SimpleTag("BuyerOrganisationDepartment", 3));
    addSubtag(new SimpleTag("BuyerOrganisationTaxCode", 4));
    addSubtag(new SimpleTag("BuyerCode", 5));
    addSubtag(new BuyerPostalAddressDetails);

    //addSubtag(new SimpleTag("BuyerPartyIdentifierUrlText"));
    //addSubtag(new SimpleTag("BuyerOrganisationTaxCodeUrlText"));
}
