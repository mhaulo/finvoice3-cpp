#include "sellerinformationdetails.h"

#include "simpletag.h"
#include "sellerofficialpostaladdressdetails.h"
#include "invoicerecipientdetails.h"

SellerInformationDetails::SellerInformationDetails() : ComplexTag("SellerInformationDetails")
{
    addSubtag(new SimpleTag("SellerHomeTownName"));
    addSubtag(new SimpleTag("SellerVatRegistrationText"));
    addSubtag(new SimpleTag("SellerVatRegistrationDate"));
    addSubtag(new SimpleTag("SellerTaxRegistrationText"));
    addSubtag(new SimpleTag("SellerAdditionalLegalInfo"));
    addSubtag(new SimpleTag("SellerPhoneNumber"));
    addSubtag(new SimpleTag("SellerFaxNumber"));
    addSubtag(new SimpleTag("SellerCommonEmailaddressIdentifier"));
    addSubtag(new SimpleTag("SellerWebaddressIdentifier"));
    addSubtag(new SimpleTag("SellerFreeText"));
    addSubtag(new SellerOfficialPostalAddressDetails);
    addSubtag(new InvoiceRecipientDetails);
    // TODO SellerAccountDetails
}
