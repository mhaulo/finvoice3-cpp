#include "originalinvoicereference.h"

#include "simpletag.h"

OriginalInvoiceReference::OriginalInvoiceReference(std::string name, short weight) : ComplexTag(name, weight)
{
    addSubtag(new SimpleTag("InvoiceNumber", 0));
    addSubtag(new SimpleTag("InvoiceDate", 1));
}
