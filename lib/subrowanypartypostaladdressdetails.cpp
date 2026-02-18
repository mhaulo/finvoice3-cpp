#include "subrowanypartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

SubRowAnyPartyPostalAddressDetails::SubRowAnyPartyPostalAddressDetails() : ComplexTag("SubRowAnyPartyPostalAddressDetails", 6)
{
    addSubtag(new SimpleTag("SubRowAnyPartyStreetName", 0));
    addSubtag(new SimpleTag("SubRowAnyPartyTownName", 1));
    addSubtag(new SimpleTag("SubRowAnyPartyPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("SubRowAnyPartyCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("SubRowAnyPartyPostOfficeBoxIdentifier", 6));
}
