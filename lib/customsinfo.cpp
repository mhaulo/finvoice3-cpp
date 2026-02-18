#include "customsinfo.h"

#include "simpletag.h"
#include "countrycode.h"

CustomsInfo::CustomsInfo(std::string name, short weight) : ComplexTag(name, weight)
{
    addSubtag(new SimpleTag("CNCode", 0));
    addSubtag(new SimpleTag("CNName", 1));
    addSubtag(new SimpleTag("CNOriginCountrySubdivision", 2));
    addSubtag(new CountryCode("CNOriginCountryCode", 3));
    addSubtag(new SimpleTag("CNOriginCountryName", 4));
}
