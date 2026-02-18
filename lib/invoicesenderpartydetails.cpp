#include "invoicesenderpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"

InvoiceSenderPartyDetails::InvoiceSenderPartyDetails() : ComplexTag("InvoiceSenderPartyDetails", 9)
{
    addSubtag(new PartyLegalRegId("InvoiceSenderPartyIdentifier", 0));
    addSubtag(new SimpleTag("InvoiceSenderOrganisationName", 1));
    addSubtag(new SimpleTag("InvoiceSenderOrganisationTaxCode", 2));
    addSubtag(new PartyIdentifier("InvoiceSenderCode", 3));
}
