#include "buyerpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

BuyerPostalAddressDetails::BuyerPostalAddressDetails() : ComplexTag("BuyerPostalAddressDetails")
{
    addSubtag(new SimpleTag("BuyerStreetName"));
    addSubtag(new SimpleTag("BuyerTownName"));
    addSubtag(new SimpleTag("BuyerPostCodeIdentifier"));
    addSubtag(new SimpleTag("BuyerCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("BuyerPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
