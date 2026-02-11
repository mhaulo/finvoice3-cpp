#include "invoicechargedetails.h"

#include "simpletag.h"
#include "vatcategorycode.h"

InvoiceChargeDetails::InvoiceChargeDetails() : ComplexTag("InvoiceChargeDetails")
{
    addSubtag(new SimpleTag("ReasonText"));
    addSubtag(new SimpleTag("ReasonCode"));
    addSubtag(new SimpleTag("Percent"));
    addSubtag(new SimpleTag("Amount"));
    addSubtag(new SimpleTag("VatRatePercent"));
    addSubtag(new VatCategoryCode);
}
