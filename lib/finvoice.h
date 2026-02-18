#ifndef FINVOICE_H
#define FINVOICE_H

#include "complextag.h"

class Finvoice : public ComplexTag
{
public:
    Finvoice();

    std::multiset<Tag*, TagComparator> getSubtags() const;
};

#endif // FINVOICE_H
