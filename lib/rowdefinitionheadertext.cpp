#include "rowdefinitionheadertext.h"

RowDefinitionHeaderText::RowDefinitionHeaderText(std::string definitionCode) : SimpleTag("RowDefinitionHeaderText")
{
    setAttribute("DefinitionCode", definitionCode);
}
