#include "epibfipartydetails.h"

#include "simpletag.h"
#include "epibfiidentifier.h"

EpiBfiPartyDetails::EpiBfiPartyDetails() : ComplexTag("EpiBfiPartyDetails", 0)
{
    addSubtag(new EpiBfiIdentifier);
    addSubtag(new SimpleTag("EpiBfiName", 1));
}
