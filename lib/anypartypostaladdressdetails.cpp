#include "anypartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

AnyPartyPostalAddressDetails::AnyPartyPostalAddressDetails() : ComplexTag("AnyPartyPostalAddressDetails")
{
    addSubtag(new SimpleTag("AnyPartyStreetName"));
    addSubtag(new SimpleTag("AnyPartyTownName"));
    addSubtag(new SimpleTag("AnyPartyPostCodeIdentifier"));
    addSubtag(new SimpleTag("AnyPartyCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("AnyPartyPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
