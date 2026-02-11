#include "subrowpackagedetails.h"

#include "simpletag.h"

SubRowPackageDetails::SubRowPackageDetails() : ComplexTag("SubRowPackageDetails")
{
    addSubtag(new SimpleTag("SubRowPackageLength"));
    addSubtag(new SimpleTag("SubRowPackageWidth"));
    addSubtag(new SimpleTag("SubRowPackageHeight"));
    addSubtag(new SimpleTag("SubRowPackageWeight"));
    addSubtag(new SimpleTag("SubRowPackageNetWeight"));
    addSubtag(new SimpleTag("SubRowPackageVolume"));
    addSubtag(new SimpleTag("SubRowTransportCarriageQuantity"));
}
