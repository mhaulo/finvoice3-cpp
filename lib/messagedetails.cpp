#include "messagedetails.h"

#include "simpletag.h"

MessageDetails::MessageDetails() : ComplexTag("MessageDetails")
{
    addSubtag(new SimpleTag("MessageIdentifier"));
    addSubtag(new SimpleTag("MessageTimeStamp"));
    addSubtag(new SimpleTag("RefToMessageIdentifier"));
    addSubtag(new SimpleTag("ImplementationCode"));
    addSubtag(new SimpleTag("SpecificationIdentifier")); // Usually "EN16931"
}
