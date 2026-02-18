#ifndef ROWDEFINITIONHEADERTEXT_H
#define ROWDEFINITIONHEADERTEXT_H

#include "simpletag.h"

class RowDefinitionHeaderText : public SimpleTag
{
public:
    RowDefinitionHeaderText(std::string name, short weight, std::string definitionCode = "");
};

#endif // ROWDEFINITIONHEADERTEXT_H
