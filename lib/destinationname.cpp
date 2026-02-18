#include "destinationname.h"

DestinationName::DestinationName() : SimpleTag("DestinationName", 0)
{

}

DestinationName::DestinationName(std::string name, short weight) : SimpleTag(name, weight)
{

}

DestinationName::DestinationName(std::string name, std::string schemeId, short weight) : SimpleTag(name, weight)
{
    setAttribute("SchemeID", schemeId);
}
