#include "shipmentpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "shipmentpostaladdressdetails.h"

ShipmentPartyDetails::ShipmentPartyDetails() : ComplexTag("ShipmentPartyDetails", 2)
{
    addSubtag(new PartyLegalRegId("ShipmentPartyIdentifier", 0));
    addSubtag(new SimpleTag("ShipmentOrganisationName", 1));
    addSubtag(new SimpleTag("ShipmentOrganisationDepartment", 2));
    addSubtag(new SimpleTag("ShipmentOrganisationTaxCode", 3));
    addSubtag(new PartyIdentifier("ShipmentCode", 4));
    addSubtag(new ShipmentPostalAddressDetails);
}
