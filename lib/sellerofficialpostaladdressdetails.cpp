#include "sellerofficialpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

SellerOfficialPostalAddressDetails::SellerOfficialPostalAddressDetails() : ComplexTag("SellerOfficialPostalAddressDetails")
{
    addSubtag(new SimpleTag("SellerOfficialStreetName"));
    addSubtag(new SimpleTag("SellerOfficialTownName"));
    addSubtag(new SimpleTag("SellerOfficialPostCodeIdentifier"));
    addSubtag(new SimpleTag("SellerOfficialCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new CountryCode);
}
