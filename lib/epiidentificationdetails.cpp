#include "epiidentificationdetails.h"

#include "simpletag.h"
#include "epireference.h"

EpiIdentificationDetails::EpiIdentificationDetails() : ComplexTag("EpiIdentificationDetails", 0)
{
    addSubtag(new SimpleTag("EpiDate", 0));
    addSubtag(new EpiReference);
    addSubtag(new SimpleTag("EpiUrl", 2));
    addSubtag(new SimpleTag("EpiEmail", 3));
    addSubtag(new SimpleTag("EpiOrderInfo", 4));
}
