#include "epipartydetails.h"

#include "epibfipartydetails.h"
#include "epibeneficiarypartydetails.h"

EpiPartyDetails::EpiPartyDetails() : ComplexTag("EpiPartyDetails")
{
    addSubtag(new EpiBfiPartyDetails);
    addSubtag(new EpiBeneficiaryPartyDetails);
}
