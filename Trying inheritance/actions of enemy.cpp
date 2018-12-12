#include "Enemy.h"
#include <iostream>

double Ninja :: attack() const 
{
	return Value_attack *(double)(attack_speed%100); 
}

double Trasher::attack() const
{
	return Value_attack * (double)force_factor; 
}

double Thinker::attack() const
{
	int chance = rand() % 100 + 1;
	if ((double)chance >= crit_chance)
	{
		return Value_attack * crit_factor;
	}
	else
		return Value_attack; 
}

double Boss :: attack() const
{
	return Value_attack; 
}

double Boss::special_attack() const
{
	return Value_attack * dmg_factor; 
}