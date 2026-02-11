#include "sellerbic.h"

SellerBic::SellerBic(std::string identificationSchemeName) : SimpleTag("SellerBic")
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
