#include "definitiondetails.h"

#include "simpletag.h"
#include "definitionheadertext.h"

DefinitionDetails::DefinitionDetails() : ComplexTag("DefinitionDetails")
{
    addSubtag(new DefinitionHeaderText);
    addSubtag(new SimpleTag("DefinitionValue"));
}
