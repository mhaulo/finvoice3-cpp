#include "rowdefinitionheadertext.h"

RowDefinitionHeaderText::RowDefinitionHeaderText(std::string name, short weight, std::string definitionCode) : SimpleTag(name, weight)
{
    setAttribute("DefinitionCode", definitionCode);
}
