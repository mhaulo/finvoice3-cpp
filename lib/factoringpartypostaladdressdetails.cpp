#include "factoringpartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

FactoringPartyPostalAddressDetails::FactoringPartyPostalAddressDetails() : ComplexTag("FactoringPartyPostalAddressDetails")
{
    addSubtag(new SimpleTag("FactoringPartyStreetName"));
    addSubtag(new SimpleTag("FactoringPartyTownName"));
    addSubtag(new SimpleTag("FactoringPartyPostCostIdentifier"));
    addSubtag(new SimpleTag("FactoringPartyCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("FactoringPartyPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
