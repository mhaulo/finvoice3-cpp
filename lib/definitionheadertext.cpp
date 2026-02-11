#include "definitionheadertext.h"

#include "simpletag.h"

DefinitionHeaderText::DefinitionHeaderText() : ComplexTag("DefinitionHeaderText")
{
    addSubtag(new SimpleTag("DefinitionCode"));
}
