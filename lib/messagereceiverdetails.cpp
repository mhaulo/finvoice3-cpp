#include "messagereceiverdetails.h"

#include "simpletag.h"
#include "electronicaddrid.h"

MessageReceiverDetails::MessageReceiverDetails() : ComplexTag("MessageReceiverDetails")
{
    addSubtag(new ElectronicAddrId("ToIdentifier", ""));
    addSubtag(new SimpleTag("ToIntermediator"));
}
