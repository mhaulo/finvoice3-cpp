#include "factoringagreementdetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "factoringpartypostaladdressdetails.h"

FactoringAgreementDetails::FactoringAgreementDetails() : ComplexTag("FactoringAgreementDetails")
{
    addSubtag(new SimpleTag("FactoringAgreementIdentifier"));
    addSubtag(new SimpleTag("TransmissionListIdentifier"));
    addSubtag(new SimpleTag("EndorsementClauseCode"));
    addSubtag(new SimpleTag("FactoringTypeCode"));
    addSubtag(new SimpleTag("FactoringFreeText"));
    addSubtag(new SimpleTag("FactoringPartyName"));
    addSubtag(new PartyLegalRegId("FactoringPartyIdentifier"));
    addSubtag(new FactoringPartyPostalAddressDetails);
}
