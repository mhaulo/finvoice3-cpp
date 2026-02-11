#include "epibeneficiarypartydetails.h"

#include "simpletag.h"
#include "epiaccountid.h"

EpiBeneficiaryPartyDetails::EpiBeneficiaryPartyDetails() : ComplexTag("EpiBeneficiaryPartyDetails")
{
    addSubtag(new SimpleTag("EpiNameAddressDetails"));
    addSubtag(new SimpleTag("EpiBei"));
    addSubtag(new EpiAccountId("EpiAccountID"));
}
