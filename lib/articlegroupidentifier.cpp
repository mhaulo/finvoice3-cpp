#include "articlegroupidentifier.h"

ArticleGroupIdentifier::ArticleGroupIdentifier(std::string schemeId, std::string schemeVersion) :
    SimpleTag("ArticleGroupIdentifier")
{
    setAttribute("SchemeID", schemeId);
    setAttribute("SchemeVersion", schemeVersion);
}
