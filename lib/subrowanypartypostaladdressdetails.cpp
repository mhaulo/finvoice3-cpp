#include "subrowanypartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

SubRowAnyPartyPostalAddressDetails::SubRowAnyPartyPostalAddressDetails() : ComplexTag("SubRowAnyPartyPostalAddressDetails")
{
    addSubtag(new SimpleTag("SubRowAnyPartyStreetName"));
    addSubtag(new SimpleTag("SubRowAnyPartyTownName"));
    addSubtag(new SimpleTag("SubRowAnyPartyPostCodeIdentifier"));
    addSubtag(new SimpleTag("SubRowAnyPartyCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("SubRowAnyPartyPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
