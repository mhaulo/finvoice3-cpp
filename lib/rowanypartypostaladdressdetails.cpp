#include "rowanypartypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

RowAnyPartyPostalAddressDetails::RowAnyPartyPostalAddressDetails() : ComplexTag("RowAnyPartyPostalAddressDetails")
{
    addSubtag(new SimpleTag("RowAnyPartyStreetName"));
    addSubtag(new SimpleTag("RowAnyPartyTownName"));
    addSubtag(new SimpleTag("RowAnyPartyPostCodeIdentifier"));
    addSubtag(new SimpleTag("RowAnyPartyCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("RowAnyPartyPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
