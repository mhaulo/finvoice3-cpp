#include "vatpoint.h"

#include "simpletag.h"

VatPoint::VatPoint() : ComplexTag("VatPoint")
{
    addSubtag(new SimpleTag("VatPointDate"));
    addSubtag(new SimpleTag("VatPointDateCode"));
}
