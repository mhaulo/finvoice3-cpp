#include "eancode.h"

EanCode::EanCode(std::string name, short weight, std::string schemeId) : SimpleTag(name, weight)
{
    setAttribute("SchemeID", schemeId);
}
