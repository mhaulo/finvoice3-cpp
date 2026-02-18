#include "epiaccountid.h"

EpiAccountId::EpiAccountId() : SimpleTag("EpiAccountId", 0)
{

}

EpiAccountId::EpiAccountId(std::string name, short weight) : SimpleTag(name, weight)
{

}
