#include "invoicerecipientdetails.h"

#include "simpletag.h"

InvoiceRecipientDetails::InvoiceRecipientDetails() : ComplexTag("InvoiceRecipientDetails", 12)
{
    addSubtag(new SimpleTag("InvoiceRecipientAddress", 0));
    addSubtag(new SimpleTag("InvoiceRecipientIntermediatorAddress", 1));
}
