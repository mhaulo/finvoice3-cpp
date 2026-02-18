#include "packagedetails.h"

#include "simpletag.h"

PackageDetails::PackageDetails() : ComplexTag("PackageDetails", 32)
{
    addSubtag(new SimpleTag("PackageLength", 0));
    addSubtag(new SimpleTag("PackageWidth", 1));
    addSubtag(new SimpleTag("PackageHeight", 2));
    addSubtag(new SimpleTag("PackageWeight", 3));
    addSubtag(new SimpleTag("PackageVolume", 4));
    addSubtag(new SimpleTag("TransportCarriageQuantity", 5));
}
