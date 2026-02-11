#include "buyerpartydetails.h"

#include "simpletag.h"
#include "buyerpostaladdressdetails.h"

BuyerPartyDetails::BuyerPartyDetails() : ComplexTag("BuyerPartyDetails")
{
    addSubtag(new SimpleTag("BuyerPartyIdentifier"));
    addSubtag(new SimpleTag("BuyerPartyIdentifierUrlText"));
    addSubtag(new SimpleTag("BuyerOrganisationTradingName"));
    addSubtag(new SimpleTag("BuyerOrganisationDepartment"));
    addSubtag(new SimpleTag("BuyerOrganisationTaxCode"));
    addSubtag(new SimpleTag("BuyerOrganisationTaxCodeUrlText"));
    addSubtag(new SimpleTag("BuyerCode"));
    addSubtag(new BuyerPostalAddressDetails);

    // TODO BuyerOrganisationNames
}
