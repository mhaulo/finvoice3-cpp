#include "factoringpartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

FactoringPartyPostalAddressDetails::FactoringPartyPostalAddressDetails() : ComplexTag("FactoringPartyPostalAddressDetails", 7)
{
    addSubtag(new SimpleTag("FactoringPartyStreetName", 0));
    addSubtag(new SimpleTag("FactoringPartyTownName", 1));
    addSubtag(new SimpleTag("FactoringPartyPostCostIdentifier", 2));
    addSubtag(new SimpleTag("FactoringPartyCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("FactoringPartyPostOfficeBoxIdentifier", 6));
}
