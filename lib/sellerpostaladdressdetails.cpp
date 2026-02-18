#include "sellerpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

SellerPostalAddressDetails::SellerPostalAddressDetails() : ComplexTag("SellerPostalAddressDetails", 8)
{
    addSubtag(new SimpleTag("SellerStreetName", 0));
    addSubtag(new SimpleTag("SellerTownName", 1));
    addSubtag(new SimpleTag("SellerPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("SellerCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("SellerPostOfficeBoxIdentifier", 6));
}
