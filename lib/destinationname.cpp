#include "destinationname.h"

DestinationName::DestinationName() : SimpleTag("DestinationName")
{

}

DestinationName::DestinationName(std::string name) : SimpleTag(name)
{

}

DestinationName::DestinationName(std::string name, std::string schemeId) : SimpleTag(name)
{
    setAttribute("SchemeID", schemeId);
}
