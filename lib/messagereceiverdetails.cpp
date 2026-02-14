#include "messagereceiverdetails.h"

#include "simpletag.h"
#include "electronicaddrid.h"

MessageReceiverDetails::MessageReceiverDetails() : ComplexTag("MessageReceiverDetails")
{
    addSubtag(new SimpleTag("ToIntermediator"));
    addSubtag(new ElectronicAddrId("ToIdentifier", ""));
}
