#include "invoicedobjectid.h"

InvoicedObjectId::InvoicedObjectId(std::string name, short weight, std::string schemeId) : SimpleTag(name, weight)
{
    setAttribute("SchemeID", schemeId);
}
