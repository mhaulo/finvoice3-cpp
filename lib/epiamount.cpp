#include "epiamount.h"

EpiAmount::EpiAmount() : SimpleTag("EpiAmount", 0)
{

}

EpiAmount::EpiAmount(std::string name, short weight) : SimpleTag(name, weight)
{

}
