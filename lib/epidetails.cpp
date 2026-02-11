#include "epidetails.h"

#include "epiidentificationdetails.h"
#include "epipartydetails.h"
#include "epipaymentinstructiondetails.h"

EpiDetails::EpiDetails() : ComplexTag("EpiDetails")
{
    addSubtag(new EpiIdentificationDetails);
    addSubtag(new EpiPartyDetails);
    addSubtag(new EpiPaymentInstructionDetails);
}
