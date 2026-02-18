#ifndef EPIACCOUNTID_H
#define EPIACCOUNTID_H

#include "simpletag.h"

class EpiAccountId : public SimpleTag
{
public:
    EpiAccountId();
    EpiAccountId(std::string name, short weight);
};

#endif // EPIACCOUNTID_H
