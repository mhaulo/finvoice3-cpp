#include "buyerpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

BuyerPostalAddressDetails::BuyerPostalAddressDetails() : ComplexTag("BuyerPostalAddressDetails", 6)
{
    addSubtag(new SimpleTag("BuyerStreetName", 0));
    addSubtag(new SimpleTag("BuyerTownName", 1));
    addSubtag(new SimpleTag("BuyerPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("BuyerCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("BuyerPostOfficeBoxIdentifier", 6));
}
