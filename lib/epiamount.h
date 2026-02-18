#ifndef EPIAMOUNT_H
#define EPIAMOUNT_H

#include "simpletag.h"

class EpiAmount : public SimpleTag
{
public:
    EpiAmount();
    EpiAmount(std::string name, short weight);
};

#endif // EPIAMOUNT_H
