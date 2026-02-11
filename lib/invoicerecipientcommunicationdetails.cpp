#include "invoicerecipientcommunicationdetails.h"

#include "simpletag.h"

InvoiceRecipientCommunicationDetails::InvoiceRecipientCommunicationDetails() : ComplexTag("InvoiceRecipientCommunicationDetails")
{
    addSubtag(new SimpleTag("InvoiceRecipientPhoneNumberIdentifier"));
    addSubtag(new SimpleTag("InvoiceRecipientEmailaddressIdentifier"));
}
