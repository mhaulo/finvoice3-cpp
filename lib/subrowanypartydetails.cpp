#include "subrowanypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "subrowanypartypostaladdressdetails.h"

SubRowAnyPartyDetails::SubRowAnyPartyDetails() : ComplexTag("SubRowAnyPartyDetails")
{
    addSubtag(new SimpleTag("SubRowAnyPartyText"));
    addSubtag(new SimpleTag("SubRowAnyPartyIdentifier"));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationName"));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationDepartment"));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationTaxCode"));
    addSubtag(new SimpleTag("SubRowAnyPartyOrganisationUnitNumber"));
    addSubtag(new SimpleTag("SubRowAnyPartySiteCode"));
    addSubtag(new PartyLegalRegId("SubRowAnyPartyIdentifier"));
    addSubtag(new PartyIdentifier("SubRowAnyPartyOrganisationDepartment"));
    addSubtag(new SubRowAnyPartyPostalAddressDetails);
}
