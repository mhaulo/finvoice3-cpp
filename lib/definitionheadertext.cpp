#include "definitionheadertext.h"

#include "simpletag.h"

DefinitionHeaderText::DefinitionHeaderText() : ComplexTag("DefinitionHeaderText", 0)
{
    addSubtag(new SimpleTag("DefinitionCode", 0));
}
