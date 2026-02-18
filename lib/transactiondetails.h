#ifndef TRANSACTIONDETAILS_H
#define TRANSACTIONDETAILS_H

#include "complextag.h"

class TransactionDetails : public ComplexTag
{
public:
    TransactionDetails(std::string name, short weight);
};

#endif // TRANSACTIONDETAILS_H
