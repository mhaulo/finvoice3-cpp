#include "epicharge.h"

EpiCharge::EpiCharge(std::string chargeOption) : SimpleTag("EpiCharge")
{
    setAttribute("ChargeOption", chargeOption);
}
