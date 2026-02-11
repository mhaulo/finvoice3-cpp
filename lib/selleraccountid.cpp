#include "selleraccountid.h"

SellerAccountId::SellerAccountId(std::string identificationSchemeName) : SimpleTag("SellerAccountId")
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
