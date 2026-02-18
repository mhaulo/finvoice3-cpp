#include "rowanypartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

RowAnyPartyPostalAddressDetails::RowAnyPartyPostalAddressDetails() : ComplexTag("RowAnyPartyPostalAddressDetails", 6)
{
    addSubtag(new SimpleTag("RowAnyPartyStreetName", 0));
    addSubtag(new SimpleTag("RowAnyPartyTownName", 1));
    addSubtag(new SimpleTag("RowAnyPartyPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("RowAnyPartyCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("RowAnyPartyPostOfficeBoxIdentifier", 6));
}
