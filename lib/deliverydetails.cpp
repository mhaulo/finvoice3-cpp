#include "deliverydetails.h"

#include "simpletag.h"
#include "deliveryperioddetails.h"
#include "shipmentpartydetails.h"
#include "countrycode.h"
#include "destinationname.h"
#include "packagedetails.h"

DeliveryDetails::DeliveryDetails() : ComplexTag("DeliveryDetails", 32)
{
    addSubtag(new SimpleTag("DeliveryDate", 0));
    addSubtag(new DeliveryPeriodDetails);
    addSubtag(new ShipmentPartyDetails);
    addSubtag(new SimpleTag("DeliveryMethodText", 3));
    addSubtag(new SimpleTag("DeliveryTermsText", 4));
    addSubtag(new SimpleTag("DeliveryTermsCode", 5));
    addSubtag(new SimpleTag("TerminalAddressText", 6));
    addSubtag(new SimpleTag("WaybillIdentifier", 7));
    addSubtag(new SimpleTag("WaybillTypeCode", 8));
    addSubtag(new SimpleTag("ClearanceIdentifier", 9));
    addSubtag(new SimpleTag("DeliveryNoteIdentifier", 10));
    addSubtag(new SimpleTag("DelivererIdentifier", 11));
    addSubtag(new CountryCode("DelivererCountryCode", 12));
    addSubtag(new SimpleTag("DelivererName", 13));
    addSubtag(new SimpleTag("DelivererCountrySubdivision", 14));
    addSubtag(new SimpleTag("DelivererCountryName", 15));
    addSubtag(new SimpleTag("ModeOfTransportIdentifier", 16));
    addSubtag(new SimpleTag("CarrierName", 17));
    addSubtag(new SimpleTag("VesselName", 18));
    addSubtag(new SimpleTag("LocationIdentifier", 19));
    addSubtag(new SimpleTag("TransportInformationDate", 20));
    addSubtag(new SimpleTag("CountryOfOrigin", 21));
    addSubtag(new SimpleTag("CountryOfDestinationName", 22));
    addSubtag(new CountryCode("DestinationCountryCode", 23));
    addSubtag(new SimpleTag("PlaceOfDischarge", 24));
    addSubtag(new DestinationName("FinalDestinationName", 25));
    addSubtag(new SimpleTag("ManufacturerIdentifier", 26));
    addSubtag(new CountryCode("ManufacturerCountryCode", 27));
    addSubtag(new SimpleTag("ManufacturerName", 28));
    addSubtag(new SimpleTag("ManufacturerCountrySubdivision", 29));
    addSubtag(new SimpleTag("ManufacturerCountryName", 30));
    addSubtag(new SimpleTag("ManufacturerOrderIdentifier", 31));
    addSubtag(new PackageDetails);
}
