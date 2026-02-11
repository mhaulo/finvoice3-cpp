#include "epipaymentinstructiondetails.h"

#include "simpletag.h"
#include "epiremittanceinfoidentifier.h"
#include "epiamount.h"
#include "epicharge.h"

EpiPaymentInstructionDetails::EpiPaymentInstructionDetails() : ComplexTag("EpiPaymentInstructionDetails")
{
    addSubtag(new SimpleTag("EpiPaymentInstructionId"));
    addSubtag(new SimpleTag("EpiTransactionTypeCode"));
    addSubtag(new SimpleTag("EpiInstructionCode"));
    addSubtag(new SimpleTag("EpiDateOptionDate"));
    addSubtag(new SimpleTag("EpiPaymentMeansCode"));
    addSubtag(new SimpleTag("EpiPaymentMeansText"));
    addSubtag(new EpiRemittanceInfoIdentifier);
    addSubtag(new EpiAmount("EpiInstructedAmount"));
    addSubtag(new EpiCharge);
}
