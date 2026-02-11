#include "specificationdetails.h"

#include "simpletag.h"
#include "externalspecificationdetails.h"

SpecificationDetails::SpecificationDetails() : ComplexTag("SpecificationDetails")
{
    addSubtag(new SimpleTag("SpecificationFreeText"));
    addSubtag(new ExternalSpecificationDetails);
}
