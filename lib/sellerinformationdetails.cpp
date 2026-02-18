#include "sellerinformationdetails.h"

#include "simpletag.h"
#include "sellerofficialpostaladdressdetails.h"
#include "invoicerecipientdetails.h"
#include "selleraccountdetails.h"

SellerInformationDetails::SellerInformationDetails() : ComplexTag("SellerInformationDetails", 8)
{
    addSubtag(new SellerOfficialPostalAddressDetails);
    addSubtag(new SimpleTag("SellerHomeTownName", 1));
    addSubtag(new SimpleTag("SellerVatRegistrationText", 2));
    addSubtag(new SimpleTag("SellerVatRegistrationDate", 3));
    addSubtag(new SimpleTag("SellerTaxRegistrationText", 4));
    addSubtag(new SimpleTag("SellerAdditionalLegalInfo", 5));
    addSubtag(new SimpleTag("SellerPhoneNumber", 6));
    addSubtag(new SimpleTag("SellerFaxNumber", 7));
    addSubtag(new SimpleTag("SellerCommonEmailaddressIdentifier", 8));
    addSubtag(new SimpleTag("SellerWebaddressIdentifier", 9));
    addSubtag(new SimpleTag("SellerFreeText", 10));
    addSubtag(new SellerAccountDetails);
    // TODO more SellerAccountDetails
    addSubtag(new InvoiceRecipientDetails);
}
