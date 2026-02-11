#include "deliverypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "deliverypostaladdressdetails.h"

DeliveryPartyDetails::DeliveryPartyDetails() : ComplexTag("DeliveryPartyDetails")
{
    addSubtag(new PartyLegalRegId);
    addSubtag(new SimpleTag("DeliveryOrganisationName"));
    addSubtag(new SimpleTag("DeliveryDepartment"));
    addSubtag(new SimpleTag("DeliveryOrganisationTaxCode"));
    addSubtag(new PartyIdentifier);
    addSubtag(new DeliveryPostalAddressDetails);
}
