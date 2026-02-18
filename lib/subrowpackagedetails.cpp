#include "subrowpackagedetails.h"

#include "simpletag.h"

SubRowPackageDetails::SubRowPackageDetails() : ComplexTag("SubRowPackageDetails", 19)
{
    addSubtag(new SimpleTag("SubRowPackageLength", 0));
    addSubtag(new SimpleTag("SubRowPackageWidth", 1));
    addSubtag(new SimpleTag("SubRowPackageHeight", 2));
    addSubtag(new SimpleTag("SubRowPackageWeight", 3));
    addSubtag(new SimpleTag("SubRowPackageNetWeight", 4));
    addSubtag(new SimpleTag("SubRowPackageVolume", 5));
    addSubtag(new SimpleTag("SubRowTransportCarriageQuantity", 6));
}
