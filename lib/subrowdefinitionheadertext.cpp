#include "subrowdefinitionheadertext.h"

SubRowDefinitionHeaderText::SubRowDefinitionHeaderText(std::string definitionCode) : SimpleTag("SubRowDefinitionHeaderText")
{
    setAttribute("DefinitionCode", definitionCode);
}
