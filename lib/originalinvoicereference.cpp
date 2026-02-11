#include "originalinvoicereference.h"

#include "simpletag.h"

OriginalInvoiceReference::OriginalInvoiceReference(std::string name) : ComplexTag(name)
{
    addSubtag(new SimpleTag("InvoiceNumber"));
    addSubtag(new SimpleTag("InvoiceDate"));
}
