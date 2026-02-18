#include "attachmentmessagedetails.h"

#include "attachmentmessageidentifier.h"

AttachmentMessageDetails::AttachmentMessageDetails() : ComplexTag("AttachmentMessageDetails", 112)
{
    addSubtag(new AttachmentMessageIdentifier);
}
