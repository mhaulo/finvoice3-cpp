#include "invoicetypecodefi.h"

InvoiceTypeCodeFi::InvoiceTypeCodeFi(std::string codeListAgencyIdentifier) : SimpleTag("InvoiceTypeCode", 0)
{
    setAttribute("CodeListAgencyIdentifier", codeListAgencyIdentifier);
}
