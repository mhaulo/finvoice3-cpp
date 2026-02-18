#include "subrowdefinitionheadertext.h"

SubRowDefinitionHeaderText::SubRowDefinitionHeaderText(std::string definitionCode) : SimpleTag("SubRowDefinitionHeaderText", 0)
{
    setAttribute("DefinitionCode", definitionCode);
}
