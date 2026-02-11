#include "invoicedobjectid.h"

InvoicedObjectId::InvoicedObjectId(std::string schemeId) : SimpleTag("InvoicedObjectId")
{
    setAttribute("SchemeID", schemeId);
}
