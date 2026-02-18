#include "selleraccountid.h"

SellerAccountId::SellerAccountId(std::string identificationSchemeName) : SimpleTag("SellerAccountID", 0)
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
