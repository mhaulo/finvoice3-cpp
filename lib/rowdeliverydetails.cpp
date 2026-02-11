#include "rowdeliverydetails.h"

#include "simpletag.h"
#include "countrycode.h"
#include "customsinfo.h"
#include "rowpackagedetails.h"

RowDeliveryDetails::RowDeliveryDetails() : ComplexTag("RowDeliveryDetails")
{
    addSubtag(new SimpleTag("RowTerminalAddressText"));
    addSubtag(new SimpleTag("RowWaybillIdentifier"));
    addSubtag(new SimpleTag("RowWaybillTypeCode"));
    addSubtag(new SimpleTag("RowClearanceIdentifier"));
    addSubtag(new SimpleTag("RowDeliveryNoteIdentifier"));
    addSubtag(new SimpleTag("RowDelivererName"));
    addSubtag(new SimpleTag("RowDelivererCountrySubdivision"));
    addSubtag(new SimpleTag("RowDelivererCountryCode"));
    addSubtag(new SimpleTag("RowDelivererCountryName"));
    addSubtag(new SimpleTag("RowModeOfTransportIdentifier"));
    addSubtag(new SimpleTag("RowCarrierName"));
    addSubtag(new SimpleTag("RowVesselName"));
    addSubtag(new SimpleTag("RowLocationIdentifier"));
    addSubtag(new SimpleTag("RowTransportInformationDate"));
    addSubtag(new SimpleTag("RowCountryOfOrigin"));
    addSubtag(new SimpleTag("RowCountryOfDestinationName"));
    addSubtag(new SimpleTag("RowDestinationCountryCode"));
    addSubtag(new SimpleTag("RowPlaceOfDischarge"));
    addSubtag(new SimpleTag("RowFinalDestinationName"));
    addSubtag(new SimpleTag("RowManufacturerArticleIdentifier"));
    addSubtag(new SimpleTag("RowManufacturerIdentifier"));
    addSubtag(new SimpleTag("RowManufacturerName"));
    addSubtag(new SimpleTag("RowManufacturerCountrySubdivision"));
    addSubtag(new SimpleTag("RowManufacturerCountryName"));
    addSubtag(new SimpleTag("RowManufacturerOrderIdentifier"));
    addSubtag(new CountryCode("RowDelivererCountryCode"));
    addSubtag(new CountryCode("RowDestinationCountryCode"));
    addSubtag(new CountryCode("RowManufacturerCountryCode"));
    addSubtag(new CustomsInfo);
    addSubtag(new RowPackageDetails);
}
