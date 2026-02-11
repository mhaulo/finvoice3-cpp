#include "messagesenderdetails.h"

#include "simpletag.h"
#include "electronicaddrid.h"

MessageSenderDetails::MessageSenderDetails() : ComplexTag("MessageSenderDetails")
{
    addSubtag(new SimpleTag("FromIntermediator"));
    addSubtag(new ElectronicAddrId("FromIdentifier"));
}
