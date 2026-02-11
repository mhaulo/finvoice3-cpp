#include "epibfipartydetails.h"

#include "simpletag.h"
#include "epibfiidentifier.h"

EpiBfiPartyDetails::EpiBfiPartyDetails() : ComplexTag("EpiBfiPartyDetails")
{
    addSubtag(new SimpleTag("EpiBfiName"));
    addSubtag(new EpiBfiIdentifier);
}
