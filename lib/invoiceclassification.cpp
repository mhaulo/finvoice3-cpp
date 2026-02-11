#include "invoiceclassification.h"

#include "simpletag.h"

InvoiceClassification::InvoiceClassification() : ComplexTag("InvoiceClassification")
{
    addSubtag(new SimpleTag("ClassificationCode"));
    addSubtag(new SimpleTag("ClassificationText"));
}
