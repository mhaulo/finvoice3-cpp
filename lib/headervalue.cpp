#include "headervalue.h"

#include "simpletag.h"

HeaderValue::HeaderValue() : ComplexTag("HeaderValue")
{
    addSubtag(new SimpleTag("Header"));
    addSubtag(new SimpleTag("Value"));
}
