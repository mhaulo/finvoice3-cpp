#include "definitiondetails.h"

#include "simpletag.h"
#include "definitionheadertext.h"

DefinitionDetails::DefinitionDetails() : ComplexTag("DefinitionDetails", 38)
{
    addSubtag(new DefinitionHeaderText);
    addSubtag(new SimpleTag("DefinitionValue", 1));
}
