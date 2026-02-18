#include "sellerofficialpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

SellerOfficialPostalAddressDetails::SellerOfficialPostalAddressDetails() : ComplexTag("SellerOfficialPostalAddressDetails", 0)
{
    addSubtag(new SimpleTag("SellerOfficialStreetName", 0));
    addSubtag(new SimpleTag("SellerOfficialTownName", 1));
    addSubtag(new SimpleTag("SellerOfficialPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("SellerOfficialCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
}
