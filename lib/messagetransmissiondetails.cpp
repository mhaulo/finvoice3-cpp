#include "messagetransmissiondetails.h"

#include "messagesenderdetails.h"
#include "messagereceiverdetails.h"
#include "messagedetails.h"

MessageTransmissionDetails::MessageTransmissionDetails() : ComplexTag("MessageTransmissionDetails")
{
    addSubtag(new MessageSenderDetails);
    addSubtag(new MessageReceiverDetails);
    addSubtag(new MessageDetails);
}
