#include "epipaymentinstructiondetails.h"

#include "simpletag.h"
#include "epiremittanceinfoidentifier.h"
#include "epiamount.h"
#include "epicharge.h"

EpiPaymentInstructionDetails::EpiPaymentInstructionDetails() : ComplexTag("EpiPaymentInstructionDetails", 2)
{
    addSubtag(new SimpleTag("EpiPaymentInstructionId", 0));
    addSubtag(new SimpleTag("EpiTransactionTypeCode", 1));
    addSubtag(new SimpleTag("EpiInstructionCode", 2));
    addSubtag(new EpiRemittanceInfoIdentifier);
    addSubtag(new EpiAmount("EpiInstructedAmount", 4));
    addSubtag(new EpiCharge);
    addSubtag(new SimpleTag("EpiDateOptionDate", 6));
    addSubtag(new SimpleTag("EpiPaymentMeansCode", 7));
    addSubtag(new SimpleTag("EpiPaymentMeansText", 8));
}
