#include "invoicechargedetails.h"

#include "simpletag.h"
#include "vatcategorycode.h"

InvoiceChargeDetails::InvoiceChargeDetails() : ComplexTag("ChargeDetails", 66)
{
    addSubtag(new SimpleTag("ReasonText", 0));
    addSubtag(new SimpleTag("ReasonCode", 1));
    addSubtag(new SimpleTag("Percent", 2));
    addSubtag(new SimpleTag("Amount", 3));
    addSubtag(new VatCategoryCode(4));
    addSubtag(new SimpleTag("VatRatePercent", 5));
}
