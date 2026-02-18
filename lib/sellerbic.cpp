#include "sellerbic.h"

SellerBic::SellerBic(std::string identificationSchemeName) : SimpleTag("SellerBic", 1)
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
