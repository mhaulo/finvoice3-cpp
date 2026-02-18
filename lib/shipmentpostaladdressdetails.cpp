#include "shipmentpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

ShipmentPostalAddressDetails::ShipmentPostalAddressDetails() : ComplexTag("ShipmentPostalAddressDetails", 5)
{
    addSubtag(new SimpleTag("ShipmentStreetName", 0));
    addSubtag(new SimpleTag("ShipmentTownName", 1));
    addSubtag(new SimpleTag("ShipmentPostCodeIdentifier", 2));
    addSubtag(new SimpleTag("ShipmentCountrySubdivision", 4));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("ShipmentPostOfficeBoxIdentifier", 6));
}
