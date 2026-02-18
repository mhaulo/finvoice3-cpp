#include "epibeneficiarypartydetails.h"

#include "simpletag.h"
#include "epiaccountid.h"

EpiBeneficiaryPartyDetails::EpiBeneficiaryPartyDetails() : ComplexTag("EpiBeneficiaryPartyDetails", 1)
{
    addSubtag(new SimpleTag("EpiNameAddressDetails", 0));
    addSubtag(new SimpleTag("EpiBei", 1));
    addSubtag(new EpiAccountId("EpiAccountID", 2));
}
