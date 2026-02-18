#include "sellerpartydetails.h"

#include "simpletag.h"
#include "sellerpostaladdressdetails.h"

SellerPartyDetails::SellerPartyDetails() : ComplexTag("SellerPartyDetails", 1)
{
    addSubtag(new SimpleTag("SellerPartyIdentifier", 0));
    addSubtag(new SimpleTag("SellerPartyIdentifierUrlText", 1));
    addSubtag(new SimpleTag("SellerOrganisationName", 2));
    // TODO more SellerOrganisationNames

    addSubtag(new SimpleTag("SellerOrganisationTradingName", 3));
    addSubtag(new SimpleTag("SellerOrganisationDepartment", 4));
    addSubtag(new SimpleTag("SellerOrganisationTaxCode", 5));
    addSubtag(new SimpleTag("SellerOrganisationTaxCodeUrlText", 6));
    addSubtag(new SimpleTag("SellerCode", 7));
    addSubtag(new SellerPostalAddressDetails);


}
