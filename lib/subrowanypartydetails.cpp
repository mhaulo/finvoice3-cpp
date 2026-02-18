#include "subrowanypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "subrowanypartypostaladdressdetails.h"

SubRowAnyPartyDetails::SubRowAnyPartyDetails() : ComplexTag("SubRowAnyPartyDetails", 53)
{
    addSubtag(new SimpleTag("SubRowAnyPartyText", 0));
    addSubtag(new PartyLegalRegId("SubRowAnyPartyIdentifier", 1));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationName", 2));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationDepartment", 3));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationTaxCode", 4));
    addSubtag(new PartyIdentifier("SubRowAnyPartyCode", 5));
    addSubtag(new SubRowAnyPartyPostalAddressDetails);
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationUnitNumber", 7));
    addSubtag(new SimpleTag("SubRowAnyPartySiteCode", 8));
}
