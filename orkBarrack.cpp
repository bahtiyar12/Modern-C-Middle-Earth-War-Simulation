#include "orkBarrack.h"
#include "orcSoldier.h"

std::unique_ptr<Soldier> OrkBarrack::make_soldier()
{
    return std::make_unique<OrcSoldier>();
}
