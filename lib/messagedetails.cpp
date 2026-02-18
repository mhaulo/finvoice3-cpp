#include "messagedetails.h"

#include "simpletag.h"

MessageDetails::MessageDetails() : ComplexTag("MessageDetails", 2)
{
    addSubtag(new SimpleTag("MessageIdentifier", 0));
    addSubtag(new SimpleTag("MessageTimeStamp", 1));
    addSubtag(new SimpleTag("RefToMessageIdentifier", 2));
    addSubtag(new SimpleTag("ImplementationCode", 3));
    addSubtag(new SimpleTag("SpecificationIdentifier", 4)); // Usually "EN16931"
}
