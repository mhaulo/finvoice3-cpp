#ifndef FINVOICE3_H
#define FINVOICE3_H

#include "lib_global.h"
#include <libxml++/libxml++.h>

#include "finvoice.h"

class FINVOICE3_EXPORT Finvoice3
{
public:
    Finvoice3();
    ~Finvoice3();

    void build();
    void compact();
    Finvoice* root();
    xmlpp::Document* getDocument() const;
    std::string toString() const;

private:
    xmlpp::Document* document;
    Finvoice *finvoice;

};

#endif // FINVOICE3_H
