#include "deliverypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

DeliveryPostalAddressDetails::DeliveryPostalAddressDetails() : ComplexTag("DeliveryPostalAddressDetails", 5)
{
    addSubtag(new SimpleTag("DeliveryStreetName", 0));
    addSubtag(new SimpleTag("DeliveryTownName", 1));
    addSubtag(new SimpleTag("DeliveryPostCostIdentifier", 2));
    addSubtag(new SimpleTag("DeliveryCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("DeliveryPostOfficeBoxIdentifier", 6));

}
