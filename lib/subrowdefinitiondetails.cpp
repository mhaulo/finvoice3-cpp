#include "subrowdefinitiondetails.h"

#include "simpletag.h"
#include "subrowdefinitionheadertext.h"

SubRowDefinitionDetails::SubRowDefinitionDetails() : ComplexTag("SubRowDefinitionDetails")
{
    addSubtag(new SimpleTag("SubRowDefinitionValue"));
    addSubtag(new SubRowDefinitionHeaderText);
}
