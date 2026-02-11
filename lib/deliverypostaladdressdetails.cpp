#include "deliverypostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

DeliveryPostalAddressDetails::DeliveryPostalAddressDetails() : ComplexTag("DeliveryPostalAddressDetails")
{
    addSubtag(new SimpleTag("DeliveryStreetName"));
    addSubtag(new SimpleTag("DeliveryTownName"));
    addSubtag(new SimpleTag("DeliveryPostCostIdentifier"));
    addSubtag(new SimpleTag("DeliveryCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("DeliveryPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
