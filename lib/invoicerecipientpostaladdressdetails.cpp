#include "invoicerecipientpostaladdressdetails.h"

#include "simpletag.h"
#include "countrycode.h"

InvoiceRecipientPostalAddressDetails::InvoiceRecipientPostalAddressDetails() : ComplexTag("InvoiceRecipientPostalAddressDetails", 5)
{
    addSubtag(new SimpleTag("InvoiceRecipientStreetName", 0));
    addSubtag(new SimpleTag("InvoiceRecipientTownName", 1));
    addSubtag(new SimpleTag("InvoiceRecipientPostCostIdentifier", 2));
    addSubtag(new SimpleTag("InvoiceRecipientCountrySubdivision", 3));
    addSubtag(new CountryCode("CountryCode", 4));
    addSubtag(new SimpleTag("CountryName", 5));
    addSubtag(new SimpleTag("InvoiceRecipientPostOfficeBoxIdentifier", 6));
}
