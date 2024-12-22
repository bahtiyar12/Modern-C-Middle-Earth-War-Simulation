#include "elfBarrack.h"

std::unique_ptr<Soldier> ElfBarrack::make_soldier()
{
	return std::make_unique<ElfSoldier>();
}
