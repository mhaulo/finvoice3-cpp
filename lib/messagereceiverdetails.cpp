#include "messagereceiverdetails.h"

#include "simpletag.h"
#include "electronicaddrid.h"

MessageReceiverDetails::MessageReceiverDetails() : ComplexTag("MessageReceiverDetails", 1)
{
    addSubtag(new ElectronicAddrId("ToIdentifier", 0, ""));
    addSubtag(new SimpleTag("ToIntermediator", 1));
}
