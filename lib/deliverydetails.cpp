#include "deliverydetails.h"

#include "simpletag.h"
#include "deliveryperioddetails.h"
#include "shipmentpartydetails.h"
#include "countrycode.h"
#include "destinationname.h"
#include "packagedetails.h"

DeliveryDetails::DeliveryDetails() : ComplexTag("DeliveryDetails")
{
    addSubtag(new DeliveryPeriodDetails);
    addSubtag(new ShipmentPartyDetails);
    addSubtag(new CountryCode("DelivererCountryCode"));
    addSubtag(new CountryCode("DestinationCountryCode"));
    addSubtag(new DestinationName("FinalDestinationName"));
    addSubtag(new CountryCode("ManufacturerCountryCode"));
    addSubtag(new PackageDetails);

    addSubtag(new SimpleTag("DeliveryDate"));
    addSubtag(new SimpleTag("DeliveryMethodText"));
    addSubtag(new SimpleTag("DeliveryTermsText"));
    addSubtag(new SimpleTag("DeliveryTermsCode"));
    addSubtag(new SimpleTag("TerminalAddressText"));
    addSubtag(new SimpleTag("WaybillIdentifier"));
    addSubtag(new SimpleTag("WaybillTypeCode"));
    addSubtag(new SimpleTag("ClearanceIdentifier"));
    addSubtag(new SimpleTag("DeliveryNoteIdentifier"));
    addSubtag(new SimpleTag("DelivererIdentifier"));
    addSubtag(new SimpleTag("DelivererName"));
    addSubtag(new SimpleTag("DelivererCountrySubdivision"));
    addSubtag(new SimpleTag("DelivererCountryName"));
    addSubtag(new SimpleTag("ModeOfTransportIdentifier"));
    addSubtag(new SimpleTag("CarrierName"));
    addSubtag(new SimpleTag("VesselName"));
    addSubtag(new SimpleTag("LocationIdentifier"));
    addSubtag(new SimpleTag("TransportInformationDate"));
    addSubtag(new SimpleTag("CountryOfOrigin"));
    addSubtag(new SimpleTag("CountryOfDestinationName"));
    addSubtag(new SimpleTag("PlaceOfDischarge"));
    addSubtag(new SimpleTag("ManufacturerIdentifier"));
    addSubtag(new SimpleTag("ManufacturerName"));
    addSubtag(new SimpleTag("ManufacturerCountrySubdivision"));
    addSubtag(new SimpleTag("ManufacturerCountryName"));
    addSubtag(new SimpleTag("ManufacturerOrderIdentifier"));
}
