#pragma once
#include "barrack.h"
#include  <memory>
#include <vector>

class Country
{
public:
	virtual ~Country() = default;
	virtual std::unique_ptr <Barrack> buildBarrack() = 0;
	virtual void recruitSoldiers(std::vector<std::unique_ptr <Soldier>> & soldiers) = 0;
	virtual int	power() const = 0;
};

