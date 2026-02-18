#include "factoringagreementdetails.h"

#include "simpletag.h"
#include "partylegalregid.h"
#include "factoringpartypostaladdressdetails.h"

FactoringAgreementDetails::FactoringAgreementDetails() : ComplexTag("FactoringAgreementDetails", 39)
{
    addSubtag(new SimpleTag("FactoringAgreementIdentifier", 0));
    addSubtag(new SimpleTag("TransmissionListIdentifier", 1));
    addSubtag(new SimpleTag("EndorsementClauseCode", 2));
    addSubtag(new SimpleTag("FactoringTypeCode", 3));
    addSubtag(new SimpleTag("FactoringFreeText", 4));
    addSubtag(new PartyLegalRegId("FactoringPartyIdentifier", 5));
    addSubtag(new SimpleTag("FactoringPartyName", 6));
    addSubtag(new FactoringPartyPostalAddressDetails);
}
