#ifndef ARTICLEGROUPIDENTIFIER_H
#define ARTICLEGROUPIDENTIFIER_H

#include "simpletag.h"

class ArticleGroupIdentifier : public SimpleTag
{
public:
    ArticleGroupIdentifier(std::string name, short weight, std::string schemeId = "", std::string schemeVersion = "");
};

#endif // ARTICLEGROUPIDENTIFIER_H
