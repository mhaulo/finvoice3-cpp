#include "anypartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

AnyPartyPostalAddressDetails::AnyPartyPostalAddressDetails() : ComplexTag("AnyPartyPostalAddressDetails", 10)
{
    addSubtag(new SimpleTag("AnyPartyStreetName", 0));
    addSubtag(new SimpleTag("AnyPartyTownName", 1));
    addSubtag(new SimpleTag("AnyPartyPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("AnyPartyCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("AnyPartyPostOfficeBoxIdentifier", 6));
}
