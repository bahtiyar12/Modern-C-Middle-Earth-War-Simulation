#pragma once
#include "barrack.h"
class OrkBarrack : public Barrack
{
public:
	std::unique_ptr<Soldier> make_soldier();
};

