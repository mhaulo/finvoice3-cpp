#include "articlegroupidentifier.h"

ArticleGroupIdentifier::ArticleGroupIdentifier(std::string name, short weight, std::string schemeId, std::string schemeVersion) :
    SimpleTag(name, weight)
{
    setAttribute("SchemeID", schemeId);
    setAttribute("SchemeVersion", schemeVersion);
}
