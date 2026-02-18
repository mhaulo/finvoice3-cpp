#include "paymenttermsdetails.h"

#include "simpletag.h"
#include "headervalue.h"
#include "cashdiscountvatdetails.h"
#include "paymentoverduefinedetails.h"

PaymentTermsDetails::PaymentTermsDetails() : ComplexTag("PaymentTermsDetails", 64)
{
    addSubtag(new SimpleTag("PaymentTermsFreeText", 0));
    addSubtag(new HeaderValue("FreeText", 1));
    addSubtag(new SimpleTag("InvoiceDueDate", 2));
    addSubtag(new SimpleTag("CashDiscountDate", 3));
    addSubtag(new SimpleTag("CashDiscountBaseAmount", 4));
    addSubtag(new SimpleTag("CashDiscountPercent", 5));
    addSubtag(new SimpleTag("CashDiscountAmount", 6));
    addSubtag(new SimpleTag("CashDiscountExcludingVatAmount", 7));
    addSubtag(new CashDiscountVatDetails);
    addSubtag(new SimpleTag("ReducedInvoiceVatIncludedAmount", 9));
    addSubtag(new PaymentOverDueFineDetails);
}
