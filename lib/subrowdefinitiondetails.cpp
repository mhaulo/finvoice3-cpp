#include "subrowdefinitiondetails.h"

#include "simpletag.h"
#include "subrowdefinitionheadertext.h"

SubRowDefinitionDetails::SubRowDefinitionDetails() : ComplexTag("SubRowDefinitionDetails", 13)
{
    addSubtag(new SubRowDefinitionHeaderText);
    addSubtag(new SimpleTag("SubRowDefinitionValue", 1));
}
