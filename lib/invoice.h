#ifndef INVOICE_H
#define INVOICE_H

#include "complextag.h"

class Invoice : public ComplexTag
{
public:
    Invoice();
    ~Invoice();
    xmlpp::Document* getDocument() const;
    std::string toString() const;

private:
    xmlpp::Document* document;
};

#endif // INVOICE_H
