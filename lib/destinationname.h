#ifndef DESTINATIONNAME_H
#define DESTINATIONNAME_H

#include "simpletag.h"

class DestinationName : public SimpleTag
{
public:
    DestinationName();
    DestinationName(std::string name, short weight);
    DestinationName(std::string name, std::string schemeId, short weight);
};

#endif // DESTINATIONNAME_H
