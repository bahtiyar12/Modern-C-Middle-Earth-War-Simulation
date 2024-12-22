#pragma once
#include "country.h"
#include <vector>

class Mordor : public Country
{
public:
	std::unique_ptr<Barrack> buildBarrack() override;
	void recruitSoldiers(std::vector<std::unique_ptr<Soldier>>& soldiers) override;
	int power() const override;
private:
	std::vector<std::unique_ptr<Soldier>> m_soldiers;

};

