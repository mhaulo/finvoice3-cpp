#ifndef INVOICEDOBJECTID_H
#define INVOICEDOBJECTID_H

#include "simpletag.h"

class InvoicedObjectId : public SimpleTag
{
public:
    InvoicedObjectId(std::string name, short weight, std::string schemeId = "");
};

#endif // INVOICEDOBJECTID_H
