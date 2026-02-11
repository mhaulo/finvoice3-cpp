#ifndef EPIBFIIDENTIFIER_H
#define EPIBFIIDENTIFIER_H

#include "simpletag.h"

class EpiBfiIdentifier : public SimpleTag
{
public:
    EpiBfiIdentifier();
    EpiBfiIdentifier(std::string identificationSchemeName);
};

#endif // EPIBFIIDENTIFIER_H
