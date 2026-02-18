#include "electronicaddrid.h"

ElectronicAddrId::ElectronicAddrId(std::string name, short weight, std::string schemeId): SimpleTag(name, weight)
{
    setAttribute("SchemeID", schemeId);
}

