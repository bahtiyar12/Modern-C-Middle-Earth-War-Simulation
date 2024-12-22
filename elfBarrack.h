#pragma once
#include "barrack.h"
#include "ElfSoldier.h"
#include <memory>

class ElfBarrack : public Barrack
{
public:
	std::unique_ptr<Soldier> make_soldier();
};

