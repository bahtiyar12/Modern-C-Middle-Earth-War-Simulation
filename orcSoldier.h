#pragma once
#include "soldier.h"
class OrcSoldier : public Soldier
{
public:
	OrcSoldier();
	OrcSoldier(int health, int m_attack);
	~OrcSoldier() = default;
	int attack() const override { return m_attack; };
	int health() const override { return m_health; };

private:
	int m_health;
	int m_attack;
};

