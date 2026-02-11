#include "shipmentpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

ShipmentPostalAddressDetails::ShipmentPostalAddressDetails() : ComplexTag("ShipmentPostalAddressDetails")
{
    addSubtag(new SimpleTag("ShipmentStreetName"));
    addSubtag(new SimpleTag("ShipmentTownName"));
    addSubtag(new SimpleTag("ShipmentPostCodeIdentifier"));
    addSubtag(new SimpleTag("ShipmentCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("ShipmentPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
