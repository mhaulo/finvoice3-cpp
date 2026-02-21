#include "finvoice3.h"
#include <iostream>

Finvoice3::Finvoice3() :
    document(new xmlpp::Document),
    finvoice(new Finvoice)
{
}

Finvoice3::~Finvoice3()
{
    delete finvoice;
    delete document;
}

void Finvoice3::compact()
{
    finvoice->compact();
}

void Finvoice3::build()
{
    compact();
    xmlpp::Element *root = document->create_root_node("Finvoice");

    for (auto attribute : finvoice->getAttributes()) {
        root->set_attribute(attribute.first, attribute.second);
    }

    for (Tag *tag : finvoice->getSubtags()) {
        xmlpp::Element *element = root->add_child(tag->getName());
        tag->build(element);
    }
}

xmlpp::Document* Finvoice3::getDocument() const
{
    return document;
}

std::string Finvoice3::toString() const
{
    return document->write_to_string_formatted();
}

Finvoice* Finvoice3::root()
{
    return finvoice;
}

bool Finvoice3::validate(const std::string schemaFilePath) const
{
    bool success = false;

    try {
        xmlpp::DomParser parser;
        parser.parse_memory(toString());
        xmlpp::SchemaValidator validator(schemaFilePath);
        validator.validate(parser.get_document());
        success = true;
    }
    catch(const xmlpp::exception& exception) {
        std::cout << exception.what() << std::endl;
    }

    return success;
}
