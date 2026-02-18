#include "epipartydetails.h"

#include "epibfipartydetails.h"
#include "epibeneficiarypartydetails.h"

EpiPartyDetails::EpiPartyDetails() : ComplexTag("EpiPartyDetails", 1)
{
    addSubtag(new EpiBfiPartyDetails);
    addSubtag(new EpiBeneficiaryPartyDetails);
}
