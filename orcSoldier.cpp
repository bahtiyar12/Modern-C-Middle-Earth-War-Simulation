#include "orcSoldier.h"

OrcSoldier::OrcSoldier() : m_health(120), m_attack(20)
{}

OrcSoldier::OrcSoldier(int health, int attack) : m_attack(attack), m_health(health)
{}
