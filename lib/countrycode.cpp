#include "countrycode.h"

CountryCode::CountryCode() : SimpleTag("CountryCode", 0)
{

}

CountryCode::CountryCode(std::string name, short weight) : SimpleTag(name, weight)
{

}
