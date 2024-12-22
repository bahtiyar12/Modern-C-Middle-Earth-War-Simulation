#pragma once
#include "country.h"
class Rivendell : public Country
{

public:
	std::unique_ptr <Barrack> buildBarrack() final override;
	void recruitSoldiers(std::vector<std::unique_ptr<Soldier>>& soldiers);
	int	power() const;

private: 
	std::vector< std::unique_ptr<Soldier>> m_soldiers;
};

