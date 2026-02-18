#include "rowdefinitiondetails.h"

#include "rowdefinitionheadertext.h"

RowDefinitionDetails::RowDefinitionDetails() : ComplexTag("RowDefinitionDetails", 12)
{
    addSubtag(new RowDefinitionHeaderText("RowDefinitionHeaderText", 0));
}
