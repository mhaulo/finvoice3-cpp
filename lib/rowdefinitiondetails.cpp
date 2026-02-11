#include "rowdefinitiondetails.h"

#include "rowdefinitionheadertext.h"

RowDefinitionDetails::RowDefinitionDetails() : ComplexTag("RowDefinitionDetails")
{
    addSubtag(new RowDefinitionHeaderText);
}
