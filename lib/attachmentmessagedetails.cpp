#include "attachmentmessagedetails.h"

#include "attachmentmessageidentifier.h"

AttachmentMessageDetails::AttachmentMessageDetails() : ComplexTag("AttachmentMessageDetails")
{
    addSubtag(new AttachmentMessageIdentifier);
}
