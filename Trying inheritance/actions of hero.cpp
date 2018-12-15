#include "Hero.h"
#include <string>
#include <iostream>
#define hp 90
#define armor 10
#define stamina 120
#define money 0
#define x 15  //coordinate
#define y 20  //coordinate 
#define partner false
#define value 15

Hero::Hero(std :: string name)
{
	Name = name; 
	HP = hp; 
	Armor = armor; 
	Stamina = stamina; 
	Money = money; 
	coordinate[0] = x; 
	coordinate[1] = y; 
	Value_attack = value; 
	Partner = partner; 
	gamer.law = 0; 
	gamer.Karma = 0; 
	gamer.rogue_respect = 0;
	for (int i = 0; i < number_quests; i++)
	{
		quests[i].complete = false; 
		quests[i].description = ""; 
		quests[i].reward = 0; 
	}
}

void Hero::print_info() const
{
	std::cout << "Name " << Name << std::endl
		<< "HP " << HP << std::endl
		<< "Armor " << Armor << std::endl
		<< "Stamina " << Stamina << std::endl
		<< "Money " << Money << std::endl
		<< "Coordinate (" << coordinate[0] << "," << coordinate[1] << ")" << std::endl
		<< "Damage " << Value_attack << std::endl
		<< "Partner " << Partner << std::endl
		<< "Reputation :" << std::endl
		<< "     a)Law " << gamer.law << std::endl
		<< "     b)Karma " << gamer.Karma << std::endl
		<< "     c)Rogue " << gamer.rogue_respect << std::endl; 
	for (int i = 0; i < number_quests; i++)
	{
	std::cout << i << " quest" << std::endl
		<< "     Complete " << quests[i].complete << std::endl
		<< "     desc " << quests[i].description << std::endl
		<< "     rew " << quests[i].reward << std::endl;
	}
}

double Hero::attack(double dmg) const
{
	return Value_attack+dmg; 
}

void Hero::heal(int heal_value) 
{ 
	if (HP += heal_value > 100)
	{
		HP = 100;
	}
	else
		HP += heal_value; 
}

int Hero::coordinate_x() const
{
	return coordinate[0]; 
}

int Hero::coordinate_y() const
{
	return coordinate[1];
}

void Hero::stamina_regen(int regen)
{
	if (Stamina + regen >= 120)
	{
		Stamina = 120;
	}
	else
		Stamina += regen; 
}

void Hero::damage_hero(double dmg)
{
	HP -=(int)dmg; 
}

void Hero::stamina_consumption()
{
	Stamina -= 50; 
}


