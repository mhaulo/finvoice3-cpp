#include "selleraccountid.h"

SellerAccountId::SellerAccountId(std::string identificationSchemeName) : SimpleTag("SellerAccountID")
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
