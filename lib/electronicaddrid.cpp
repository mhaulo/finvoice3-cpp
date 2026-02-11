#include "electronicaddrid.h"

ElectronicAddrId::ElectronicAddrId(std::string schemeId): SimpleTag("ElectronicAddrId")
{
    setAttribute("SchemeID", schemeId);
}

