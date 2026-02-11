#include "invoice.h"

Invoice::Invoice() :
    document(new xmlpp::Document)
{
    setAttribute("Version", "3.0");
    setAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");
    setAttribute("xsi:noNamespaceSchemaLocation", "Finvoice3.0.xsd");
}

Invoice::~Invoice()
{
    delete document;
}

xmlpp::Document* Invoice::getDocument() const
{
    return document;
}

std::string Invoice::toString() const
{
    return document->write_to_string_formatted();
}
