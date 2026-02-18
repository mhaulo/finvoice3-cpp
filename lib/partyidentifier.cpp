#include "partyidentifier.h"

PartyIdentifier::PartyIdentifier() : SimpleTag("PartyIdentifier", 0)
{

}

PartyIdentifier::PartyIdentifier(std::string name, short weight) : SimpleTag(name, weight)
{

}
