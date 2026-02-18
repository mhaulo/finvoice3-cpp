#include "invoicerecipientpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "invoicerecipientpostaladdressdetails.h"

InvoiceRecipientPartyDetails::InvoiceRecipientPartyDetails() : ComplexTag("InvoiceRecipientPartyDetails", 10)
{
    addSubtag(new PartyLegalRegId("InvoiceRecipientPartyIdentifier", 0));
    addSubtag(new SimpleTag("InvoiceRecipientOrganisationName", 1));
    addSubtag(new SimpleTag("InvoiceRecipientDepartment", 2));
    addSubtag(new SimpleTag("InvoiceRecipientOrganisationTaxCode", 3));
    addSubtag(new PartyIdentifier("InvoiceRecipientCode", 4));
    addSubtag(new InvoiceRecipientPostalAddressDetails);
}
