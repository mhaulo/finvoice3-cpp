#include "epibfiidentifier.h"

EpiBfiIdentifier::EpiBfiIdentifier() : SimpleTag("EpiBfiIdentifier")
{
}

EpiBfiIdentifier::EpiBfiIdentifier(std::string identificationSchemeName) : SimpleTag("EpiBfiIdentifier")
{
    setAttribute("IdentificationSchemeName", identificationSchemeName); // For example BIC
}
