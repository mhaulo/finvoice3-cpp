#include "directdebitinfo.h"

#include "simpletag.h"
#include "epiaccountid.h"

DirectDebitInfo::DirectDebitInfo() : ComplexTag("DirectDebitInfo", 36)
{
    addSubtag(new SimpleTag("MandateReference", 0));
    addSubtag(new SimpleTag("CreditorIdentifier", 1));
    addSubtag(new EpiAccountId("DebitedAccountID", 2));
}
