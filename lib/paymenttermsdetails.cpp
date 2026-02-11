#include "paymenttermsdetails.h"

#include "simpletag.h"
#include "headervalue.h"
#include "cashdiscountvatdetails.h"
#include "paymentoverduefinedetails.h"

PaymentTermsDetails::PaymentTermsDetails() : ComplexTag("PaymentTermsDetails")
{
    addSubtag(new HeaderValue); // free text
    addSubtag(new CashDiscountVatDetails);
    addSubtag(new PaymentOverDueFineDetails);
    addSubtag(new SimpleTag("PaymentTermsFreeText"));
    addSubtag(new SimpleTag("InvoiceDueDate"));
    addSubtag(new SimpleTag("CashDiscountDate"));
    addSubtag(new SimpleTag("CashDiscountBaseAmount"));
    addSubtag(new SimpleTag("CashDiscountPercent"));
    addSubtag(new SimpleTag("CashDiscountAmount"));
    addSubtag(new SimpleTag("CashDiscountExcludingVatAmount"));
    addSubtag(new SimpleTag("ReducedInvoiceVatIncludedAmount"));
}
