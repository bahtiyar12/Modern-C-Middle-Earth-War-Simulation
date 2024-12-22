#pragma once
class Soldier
{
public:
	virtual ~Soldier() = default;
	virtual int attack() const = 0;
	virtual int health() const = 0;
};

