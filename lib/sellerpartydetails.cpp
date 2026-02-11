#include "sellerpartydetails.h"

#include "simpletag.h"
#include "sellerpostaladdressdetails.h"

SellerPartyDetails::SellerPartyDetails() : ComplexTag("SellerPartyDetails")
{
    addSubtag(new SimpleTag("SellerPartyIdentifier"));
    addSubtag(new SimpleTag("SellerPartyIdentifierUrlText"));
    addSubtag(new SimpleTag("SellerOrganisationTradingName"));
    addSubtag(new SimpleTag("SellerOrganisationDepartment"));
    addSubtag(new SimpleTag("SellerOrganisationTaxCode"));
    addSubtag(new SimpleTag("SellerOrganisationTaxCodeUrlText"));
    addSubtag(new SimpleTag("SellerCode"));
    addSubtag(new SellerPostalAddressDetails);
    // TODO SellerOrganisationNames
}
