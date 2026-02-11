#ifndef INVOICETYPECODEFI_H
#define INVOICETYPECODEFI_H

#include "simpletag.h"

class InvoiceTypeCodeFi : public SimpleTag
{
public:
    InvoiceTypeCodeFi(std::string codeListAgencyIdentifier = "");
};

#endif // INVOICETYPECODEFI_H
