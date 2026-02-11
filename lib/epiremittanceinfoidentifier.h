#ifndef EPIREMITTANCEINFOIDENTIFIER_H
#define EPIREMITTANCEINFOIDENTIFIER_H

#include "simpletag.h"

class EpiRemittanceInfoIdentifier : public SimpleTag
{
public:
    EpiRemittanceInfoIdentifier(std::string identificationSchemeName = "");
};

#endif // EPIREMITTANCEINFOIDENTIFIER_H
