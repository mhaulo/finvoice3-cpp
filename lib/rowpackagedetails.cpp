#include "rowpackagedetails.h"

#include "simpletag.h"

RowPackageDetails::RowPackageDetails() : ComplexTag("RowPackageDetails")
{
    addSubtag(new SimpleTag("RowPackageLength"));
    addSubtag(new SimpleTag("RowPackageWidth"));
    addSubtag(new SimpleTag("RowPackageHeight"));
    addSubtag(new SimpleTag("RowPackageWeight"));
    addSubtag(new SimpleTag("RowPackageNetWeight"));
    addSubtag(new SimpleTag("RowPackageVolume"));
    addSubtag(new SimpleTag("RowTransportCarriageQuantity"));
}
