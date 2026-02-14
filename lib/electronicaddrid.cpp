#include "electronicaddrid.h"

ElectronicAddrId::ElectronicAddrId(std::string name, std::string schemeId): SimpleTag(name)
{
    setAttribute("SchemeID", schemeId);
}

