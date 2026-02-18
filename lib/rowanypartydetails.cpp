#include "rowanypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "rowanypartypostaladdressdetails.h"

RowAnyPartyDetails::RowAnyPartyDetails() : ComplexTag("RowAnyPartyDetails", 54)
{
    addSubtag(new SimpleTag("RowAnyPartyText", 0));
    addSubtag(new PartyLegalRegId("RowAnyPartyIdentifier", 1));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationName", 2));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationDepartment", 3));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationTaxCode", 4));
    addSubtag(new PartyIdentifier("RowAnyPartyCode", 5));
    addSubtag(new RowAnyPartyPostalAddressDetails);
    addSubtag(new SimpleTag("RowAnyPartyOrganisationUnitNumber", 7));
    addSubtag(new SimpleTag("RowAnyPartySiteCode", 8));
}
