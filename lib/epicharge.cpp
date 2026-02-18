#include "epicharge.h"

EpiCharge::EpiCharge(std::string chargeOption) : SimpleTag("EpiCharge", 5)
{
    setAttribute("ChargeOption", chargeOption);
}
