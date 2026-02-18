#include "epibfiidentifier.h"

EpiBfiIdentifier::EpiBfiIdentifier() : SimpleTag("EpiBfiIdentifier", 0)
{
}

EpiBfiIdentifier::EpiBfiIdentifier(std::string identificationSchemeName) : SimpleTag("EpiBfiIdentifier", 0)
{
    setAttribute("IdentificationSchemeName", identificationSchemeName); // For example BIC
}
