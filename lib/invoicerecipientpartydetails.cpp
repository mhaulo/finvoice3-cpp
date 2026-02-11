#include "invoicerecipientpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "invoicerecipientpostaladdressdetails.h"

InvoiceRecipientPartyDetails::InvoiceRecipientPartyDetails() : ComplexTag("InvoiceRecipientPartyDetails")
{
    addSubtag(new PartyLegalRegId);
    addSubtag(new PartyIdentifier);
    addSubtag(new InvoiceRecipientPostalAddressDetails);
    addSubtag(new SimpleTag("InvoiceRecipientOrganisationName"));
    addSubtag(new SimpleTag("InvoiceRecipientDepartment"));
    addSubtag(new SimpleTag("InvoiceRecipientOrganisationTaxCode"));
}
