#ifndef FINVOICE_H
#define FINVOICE_H

#include "complextag.h"

class Finvoice : public ComplexTag
{
public:
    Finvoice();

    std::vector<Tag*> getSubtags() const;
};

#endif // FINVOICE_H
