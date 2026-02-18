#include "transactiondetails.h"

#include "simpletag.h"

TransactionDetails::TransactionDetails(std::string name, short weight) : ComplexTag(name, weight)
{
    addSubtag(new SimpleTag("OtherCurrencyAmount", 0));
    addSubtag(new SimpleTag("ExchangeRate", 1));
    addSubtag(new SimpleTag("ExchangeDate", 2));
}
