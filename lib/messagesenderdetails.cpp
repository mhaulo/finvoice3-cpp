#include "messagesenderdetails.h"

#include "simpletag.h"
#include "electronicaddrid.h"

MessageSenderDetails::MessageSenderDetails() : ComplexTag("MessageSenderDetails")
{
    addSubtag(new ElectronicAddrId("FromIdentifier", ""));
    addSubtag(new SimpleTag("FromIntermediator"));
}
