#include "epiremittanceinfoidentifier.h"

EpiRemittanceInfoIdentifier::EpiRemittanceInfoIdentifier(std::string identificationSchemeName) : SimpleTag("EpiRemittanceInfoIdentifier", 3)
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
