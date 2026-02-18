#include "rowpackagedetails.h"

#include "simpletag.h"

RowPackageDetails::RowPackageDetails() : ComplexTag("RowPackageDetails", 28)
{
    addSubtag(new SimpleTag("RowPackageLength", 0));
    addSubtag(new SimpleTag("RowPackageWidth", 1));
    addSubtag(new SimpleTag("RowPackageHeight", 2));
    addSubtag(new SimpleTag("RowPackageWeight", 3));
    addSubtag(new SimpleTag("RowPackageNetWeight", 4));
    addSubtag(new SimpleTag("RowPackageVolume", 5));
    addSubtag(new SimpleTag("RowTransportCarriageQuantity", 6));
}
