#include "anypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "anypartycommunicationdetails.h"
#include "anypartypostaladdressdetails.h"

AnyPartyDetails::AnyPartyDetails() : ComplexTag("AnyPartyDetails", 33)
{
    addSubtag(new SimpleTag("AnyPartyText", 0));
    addSubtag(new PartyLegalRegId("AnyPartyIdentifier", 1));
    addSubtag(new SimpleTag("AnyPartyOrganisationName", 2));
    // TODO more AnyPartyOrganisationNames
    addSubtag(new SimpleTag("AnyPartyOrganisationDepartment", 3));
    addSubtag(new SimpleTag("AnyPartyOrganisationTaxCode", 4));
    addSubtag(new PartyIdentifier("AnyPartyCode", 5));
    addSubtag(new SimpleTag("AnyPartyContactPersonName", 6));
    addSubtag(new SimpleTag("AnyPartyContactPersonFunction", 7));
    addSubtag(new SimpleTag("AnyPartyContactPersonDepartment", 8));
    addSubtag(new AnyPartyCommunicationDetails);
    addSubtag(new AnyPartyPostalAddressDetails);
    addSubtag(new SimpleTag("AnyPartyOrganisationUnitNumber", 11));
    addSubtag(new SimpleTag("AnyPartySiteCode", 12));
}
