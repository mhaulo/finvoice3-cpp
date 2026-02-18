#include "invoicerecipientcommunicationdetails.h"

#include "simpletag.h"

InvoiceRecipientCommunicationDetails::InvoiceRecipientCommunicationDetails() : ComplexTag("InvoiceRecipientCommunicationDetails", 17)
{
    addSubtag(new SimpleTag("InvoiceRecipientPhoneNumberIdentifier", 0));
    addSubtag(new SimpleTag("InvoiceRecipientEmailaddressIdentifier", 1));
}
