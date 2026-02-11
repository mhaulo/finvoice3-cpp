#include "anypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "anypartycommunicationdetails.h"
#include "anypartypostaladdressdetails.h"

AnyPartyDetails::AnyPartyDetails() : ComplexTag("AnyPartyDetails")
{
    addSubtag(new SimpleTag("AnyPartyText"));
    addSubtag(new PartyLegalRegId);
    addSubtag(new SimpleTag("AnyPartyOrganisationDepartment"));
    addSubtag(new SimpleTag("AnyPartyOrganisationTaxCode"));
    addSubtag(new SimpleTag("AnyPartyContactPersonName"));
    addSubtag(new SimpleTag("AnyPartyContactPersonFunction"));
    addSubtag(new SimpleTag("AnyPartyContactPersonDepartment"));
    addSubtag(new AnyPartyCommunicationDetails);
    addSubtag(new AnyPartyPostalAddressDetails);

    // TODO AnyPartyOrganisationNames
}
