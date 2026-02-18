#include "deliverypartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "deliverypostaladdressdetails.h"

DeliveryPartyDetails::DeliveryPartyDetails() : ComplexTag("DeliveryPartyDetails", 25)
{
    addSubtag(new PartyLegalRegId("DeliveryPartyIdentifier", 0));
    addSubtag(new SimpleTag("DeliveryOrganisationName", 1));
    addSubtag(new SimpleTag("DeliveryDepartment", 2));
    addSubtag(new SimpleTag("DeliveryOrganisationTaxCode", 3));
    addSubtag(new PartyIdentifier("DeliveryCode", 4));
    addSubtag(new DeliveryPostalAddressDetails);
}
