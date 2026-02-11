#include "invoicesenderpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"

InvoiceSenderPartyDetails::InvoiceSenderPartyDetails() : ComplexTag("InvoiceSenderPartyDetails")
{
    addSubtag(new SimpleTag("InvoiceSenderOrganisationName"));
    addSubtag(new SimpleTag("InvoiceSenderOrganisationTaxCode"));
    addSubtag(new PartyLegalRegId);
    addSubtag(new PartyIdentifier);
}
