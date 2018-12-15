#include <string>
#pragma once
#define number_of_heal_items 3
#define number_of_weapons 3
#define number_type_of_ammo 2
#define number_type_of_alcohol 3
#define number_type_of_food 9

struct Quest
{
	int id;
	bool complete;
	std::string description;
	double reward;
	//exp thinking
};

struct Reputation
{
	unsigned int law;
	unsigned int Karma;
	unsigned int rogue_respect;
};


struct Characteristic
{
	double acc_procent;
	double head_procent;
	int hp_heal;
	unsigned int eloquence;
};

struct Equipment
{
	Heal_items eq1[number_of_heal_items];
	Weapon eq2[number_of_weapons];
	Ammo eq3[number_type_of_ammo];
	Alcohol eq4[number_type_of_alcohol];
	Food eq5[number_type_of_food];
};