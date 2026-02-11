#include "packagedetails.h"

#include "simpletag.h"

PackageDetails::PackageDetails() : ComplexTag("PackageDetails")
{
    addSubtag(new SimpleTag("PackageLength"));
    addSubtag(new SimpleTag("PackageWidth"));
    addSubtag(new SimpleTag("PackageHeight"));
    addSubtag(new SimpleTag("PackageWeight"));
    addSubtag(new SimpleTag("PackageVolume"));
    addSubtag(new SimpleTag("TransportCarriageQuantity"));
}
