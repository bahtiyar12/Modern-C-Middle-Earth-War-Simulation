#include "elfSoldier.h"

ElfSoldier::ElfSoldier()
{
	m_health = 70;
	m_attack = 30;
}

ElfSoldier::ElfSoldier(int health, int attack) : m_health(health), m_attack(attack)
{}


