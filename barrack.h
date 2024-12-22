#pragma once
#include "soldier.h"
#include <memory>
class Barrack
{
public:
	virtual ~Barrack() = default;
	virtual std::unique_ptr<Soldier> make_soldier() = 0;
};

