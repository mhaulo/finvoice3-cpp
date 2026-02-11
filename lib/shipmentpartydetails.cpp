#include "shipmentpartydetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "partyidentifier.h"
#include "shipmentpostaladdressdetails.h"

ShipmentPartyDetails::ShipmentPartyDetails() : ComplexTag("ShipmentPartyDetails")
{
    addSubtag(new SimpleTag("ShipmentPartyIdentifier"));
    addSubtag(new SimpleTag("ShipmentOrganisationName"));
    addSubtag(new SimpleTag("ShipmentOrganisationDepartment"));
    addSubtag(new SimpleTag("ShipmentOrganisationTaxCode"));
    addSubtag(new PartyLegalRegId);
    addSubtag(new PartyIdentifier);
    addSubtag(new ShipmentPostalAddressDetails);
}
