#ifndef HEADERVALUE_H
#define HEADERVALUE_H

#include "complextag.h"

class HeaderValue : public ComplexTag
{
public:
    HeaderValue(std::string name, short weight);
};

#endif // HEADERVALUE_H
