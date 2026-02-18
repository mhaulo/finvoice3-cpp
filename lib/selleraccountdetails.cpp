#include "selleraccountdetails.h"

#include "simpletag.h"
#include "selleraccountid.h"
#include "sellerbic.h"

SellerAccountDetails::SellerAccountDetails() : ComplexTag("SellerAccountDetails", 11)
{
    addSubtag(new SellerAccountId);
    addSubtag(new SellerBic);
    addSubtag(new SimpleTag("SellerAccountName", 2));
}
