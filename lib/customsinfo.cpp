#include "customsinfo.h"

#include "simpletag.h"
#include "countrycode.h"

CustomsInfo::CustomsInfo(std::string name) : ComplexTag(name)
{
    addSubtag(new SimpleTag("CNCode"));
    addSubtag(new SimpleTag("CNName"));
    addSubtag(new SimpleTag("CNOriginCountrySubdivision"));
    addSubtag(new SimpleTag("CNOriginCountryName"));
    addSubtag(new CountryCode("CNOriginCountryCode"));
}
