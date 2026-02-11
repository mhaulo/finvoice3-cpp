#include "invoicetypecodefi.h"

InvoiceTypeCodeFi::InvoiceTypeCodeFi(std::string codeListAgencyIdentifier) : SimpleTag("InvoiceTypeCode")
{
    setAttribute("CodeListAgencyIdentifier", codeListAgencyIdentifier);
}
