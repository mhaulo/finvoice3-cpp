#include "rowdeliverydetails.h"

#include "simpletag.h"
#include "countrycode.h"
#include "customsinfo.h"
#include "rowpackagedetails.h"

RowDeliveryDetails::RowDeliveryDetails() : ComplexTag("RowDeliveryDetails", 55)
{
    addSubtag(new SimpleTag("RowTerminalAddressText", 0));
    addSubtag(new SimpleTag("RowWaybillIdentifier", 1));
    addSubtag(new SimpleTag("RowWaybillTypeCode", 2));
    addSubtag(new SimpleTag("RowClearanceIdentifier", 3));
    addSubtag(new SimpleTag("RowDeliveryNoteIdentifier", 4));
    addSubtag(new SimpleTag("RowDelivererIdentifier", 5));
    addSubtag(new SimpleTag("RowDelivererName", 6));
    addSubtag(new SimpleTag("RowDelivererCountrySubdivision", 7));
    addSubtag(new CountryCode("RowDelivererCountryCode", 8));
    addSubtag(new SimpleTag("RowDelivererCountryName", 9));
    addSubtag(new SimpleTag("RowModeOfTransportIdentifier", 10));
    addSubtag(new SimpleTag("RowCarrierName", 11));
    addSubtag(new SimpleTag("RowVesselName", 12));
    addSubtag(new SimpleTag("RowLocationIdentifier", 13));
    addSubtag(new SimpleTag("RowTransportInformationDate", 14));
    addSubtag(new SimpleTag("RowCountryOfOrigin", 15));
    addSubtag(new SimpleTag("RowCountryOfDestinationName", 16));
    addSubtag(new CountryCode("RowDestinationCountryCode", 17));
    addSubtag(new SimpleTag("RowPlaceOfDischarge", 18));
    addSubtag(new SimpleTag("RowFinalDestinationName", 19));
    addSubtag(new CustomsInfo("RowCustomsInfo", 20));
    addSubtag(new SimpleTag("RowManufacturerArticleIdentifier", 21));
    addSubtag(new SimpleTag("RowManufacturerIdentifier", 22));
    addSubtag(new SimpleTag("RowManufacturerName", 23));
    addSubtag(new SimpleTag("RowManufacturerCountrySubdivision", 24));
    addSubtag(new CountryCode("RowManufacturerCountryCode", 25));
    addSubtag(new SimpleTag("RowManufacturerCountryName", 26));
    addSubtag(new SimpleTag("RowManufacturerOrderIdentifier", 27));
    addSubtag(new RowPackageDetails());
}
