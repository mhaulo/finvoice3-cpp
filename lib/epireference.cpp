#include "epireference.h"

EpiReference::EpiReference() : SimpleTag("EpiReference", 1)
{

}

bool EpiReference::isBlank() const
{
    return false;
}
