#ifndef DESTINATIONNAME_H
#define DESTINATIONNAME_H

#include "simpletag.h"

class DestinationName : public SimpleTag
{
public:
    DestinationName();
    DestinationName(std::string name);
    DestinationName(std::string name, std::string schemeId);
};

#endif // DESTINATIONNAME_H
