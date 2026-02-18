#include "headervalue.h"

#include "simpletag.h"

HeaderValue::HeaderValue(std::string name, short weight) : ComplexTag(name, weight)
{
    addSubtag(new SimpleTag("Header", 0));
    addSubtag(new SimpleTag("Value", 1));
}
