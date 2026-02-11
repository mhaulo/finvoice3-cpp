#include "epiremittanceinfoidentifier.h"

EpiRemittanceInfoIdentifier::EpiRemittanceInfoIdentifier(std::string identificationSchemeName) : SimpleTag("EpiRemittanceInfoIdentifier")
{
    setAttribute("IdentificationSchemeName", identificationSchemeName);
}
