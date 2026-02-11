#include "transactiondetails.h"

#include "simpletag.h"

TransactionDetails::TransactionDetails(std::string name) : ComplexTag(name)
{
    addSubtag(new SimpleTag("OtherCurrencyAmount"));
    addSubtag(new SimpleTag("ExchangeRate"));
    addSubtag(new SimpleTag("ExchangeDate"));
}
