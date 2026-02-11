#include "sellerpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

SellerPostalAddressDetails::SellerPostalAddressDetails() : ComplexTag("SellerPostalAddressDetails")
{
    addSubtag(new SimpleTag("SellerStreetName"));
    addSubtag(new SimpleTag("SellerTownName"));
    addSubtag(new SimpleTag("SellerPostCodeIdentifier"));
    addSubtag(new SimpleTag("SellerCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("SellerPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
