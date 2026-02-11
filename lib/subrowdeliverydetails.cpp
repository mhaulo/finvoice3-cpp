#include "subrowdeliverydetails.h"

#include "simpletag.h"
#include "countrycode.h"
#include "customsinfo.h"
#include "subrowpackagedetails.h"

SubRowDeliveryDetails::SubRowDeliveryDetails() : ComplexTag("SubRowDeliveryDetails")
{
    addSubtag(new CountryCode("SubRowDelivererCountryCode"));
    addSubtag(new CountryCode("SubRowManufacturerCountryCode"));
    addSubtag(new CustomsInfo(""));
    addSubtag(new SubRowPackageDetails);
    addSubtag(new SimpleTag("SubRowTerminalAddressText"));
    addSubtag(new SimpleTag("SubRowWaybillIdentifier"));
    addSubtag(new SimpleTag("SubRowWaybillTypeCode"));
    addSubtag(new SimpleTag("SubRowClearanceIdentifier"));
    addSubtag(new SimpleTag("SubRowDeliveryNoteIdentifier"));
    addSubtag(new SimpleTag("SubRowDelivererName"));
    addSubtag(new SimpleTag("SubRowDelivererCountrySubdivision"));
    addSubtag(new SimpleTag("SubRowDelivererCountryName"));
    addSubtag(new SimpleTag("SubRowPlaceOfDischarge"));
    addSubtag(new SimpleTag("SubRowFinalDestinationName"));
    addSubtag(new SimpleTag("SubRowManufacturerArticleIdentifier"));
    addSubtag(new SimpleTag("SubRowManufacturerIdentifier"));
    addSubtag(new SimpleTag("SubRowManufacturerName"));
    addSubtag(new SimpleTag("SubRowManufacturerCountrySubdivision"));
    addSubtag(new SimpleTag("SubRowManufacturerCountryName"));
    addSubtag(new SimpleTag("SubRowManufacturerOrderIdentifier"));
}
