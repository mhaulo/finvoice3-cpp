#ifndef EPIREFERENCE_H
#define EPIREFERENCE_H

#include "simpletag.h"

class EpiReference : public SimpleTag
{
public:
    EpiReference();
    bool isBlank() const;
};

#endif // EPIREFERENCE_H
