#include "eancode.h"

EanCode::EanCode(std::string schemeId) : SimpleTag("EanCode")
{
    setAttribute("SchemeID", schemeId);
}
