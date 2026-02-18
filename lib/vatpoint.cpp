#include "vatpoint.h"

#include "simpletag.h"

VatPoint::VatPoint() : ComplexTag("VatPoint", 60)
{
    addSubtag(new SimpleTag("VatPointDate", 0));
    addSubtag(new SimpleTag("VatPointDateCode", 1));
}
