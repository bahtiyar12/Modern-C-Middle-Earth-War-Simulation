#pragma once
#include "soldier.h"
class ElfSoldier : public Soldier
{
public:
	ElfSoldier();
	ElfSoldier(int health, int attack);
	~ElfSoldier() = default;
	int attack() const override { return m_attack; };
	int health() const override { return m_health; };

private:
	int m_attack;
	int m_health;
};

