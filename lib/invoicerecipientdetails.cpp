#include "invoicerecipientdetails.h"

#include "simpletag.h"

InvoiceRecipientDetails::InvoiceRecipientDetails() : ComplexTag("InvoiceRecipientDetails")
{
    addSubtag(new SimpleTag("InvoiceRecipientAddress"));
    addSubtag(new SimpleTag("InvoiceRecipientIntermediatorAddress"));
}
