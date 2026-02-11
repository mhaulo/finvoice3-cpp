#include "directdebitinfo.h"

#include "simpletag.h"
#include "epiaccountid.h"

DirectDebitInfo::DirectDebitInfo() : ComplexTag("DirectDebitInfo")
{
    addSubtag(new SimpleTag("MandateReference"));
    addSubtag(new SimpleTag("CreditorIdentifier"));
    addSubtag(new EpiAccountId("DebitedAccountID"));
}
