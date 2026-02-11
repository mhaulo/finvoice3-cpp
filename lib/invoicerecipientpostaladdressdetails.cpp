#include "invoicerecipientpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

InvoiceRecipientPostalAddressDetails::InvoiceRecipientPostalAddressDetails() : ComplexTag("InvoiceRecipientPostalAddressDetails")
{
    addSubtag(new SimpleTag("InvoiceRecipientStreetName"));
    addSubtag(new SimpleTag("InvoiceRecipientTownName"));
    addSubtag(new SimpleTag("InvoiceRecipientPostCostIdentifier"));
    addSubtag(new SimpleTag("InvoiceRecipientCountrySubdivision"));
    addSubtag(new SimpleTag("CountryName"));
    addSubtag(new SimpleTag("InvoiceRecipientPostOfficeBoxIdentifier"));
    addSubtag(new CountryCode);
}
