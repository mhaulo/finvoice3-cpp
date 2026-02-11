#include "epiidentificationdetails.h"

#include "simpletag.h"
#include "epireference.h"

EpiIdentificationDetails::EpiIdentificationDetails() : ComplexTag("EpiIdentificationDetails")
{
    addSubtag(new SimpleTag("EpiDate"));
    addSubtag(new SimpleTag("EpiUrl"));
    addSubtag(new SimpleTag("EpiEmail"));
    addSubtag(new SimpleTag("EpiOrderInfo"));
    addSubtag(new EpiReference);
}
