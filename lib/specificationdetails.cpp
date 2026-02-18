#include "specificationdetails.h"

#include "simpletag.h"
#include "externalspecificationdetails.h"

SpecificationDetails::SpecificationDetails() : ComplexTag("SpecificationDetails", 100)
{
    addSubtag(new SimpleTag("SpecificationFreeText", 0));
    addSubtag(new ExternalSpecificationDetails(1));
}
