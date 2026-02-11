#include "rowanypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "rowanypartypostaladdressdetails.h"

RowAnyPartyDetails::RowAnyPartyDetails() : ComplexTag("RowAnyPartyDetails")
{
    addSubtag(new PartyLegalRegId("RowAnyPartyIdentifier"));
    addSubtag(new PartyIdentifier("RowAnyPartyCode"));
    addSubtag(new RowAnyPartyPostalAddressDetails);
    addSubtag(new SimpleTag("RowAnyPartyText"));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationName"));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationDepartment"));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationTaxCode"));
    addSubtag(new SimpleTag("RowAnyPartyOrganisationUnitNumber"));
    addSubtag(new SimpleTag("RowAnyPartySiteCode"));
}
