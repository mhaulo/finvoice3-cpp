#include "messagesenderdetails.h"

#include "simpletag.h"
#include "electronicaddrid.h"

MessageSenderDetails::MessageSenderDetails() : ComplexTag("MessageSenderDetails", 0)
{
    addSubtag(new ElectronicAddrId("FromIdentifier", 0, ""));
    addSubtag(new SimpleTag("FromIntermediator", 1));
}
