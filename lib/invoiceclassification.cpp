#include "invoiceclassification.h"

#include "simpletag.h"

InvoiceClassification::InvoiceClassification() : ComplexTag("InvoiceClassification", 3)
{
    addSubtag(new SimpleTag("ClassificationCode", 0));
    addSubtag(new SimpleTag("ClassificationText", 1));
}
