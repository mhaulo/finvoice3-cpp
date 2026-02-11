#ifndef EANCODE_H
#define EANCODE_H

#include "simpletag.h"

class EanCode : public SimpleTag
{
public:
    EanCode(std::string schemeId = "");
};

#endif // EANCODE_H
