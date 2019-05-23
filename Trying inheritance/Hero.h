#include "Item.h"
#include "Struct.h"
#pragma once
#define number_quests  1

class Hero
{
private: 
	std::string Name; 
	int HP; 
	int Armor; 
	int Stamina; 
	int Money;
	int coordinate[2]; 
	double Value_attack; 
	bool Partner;
	Reputation gamer; 
	Quest quests[number_quests]; 
	Characteristic hero_ch;  
	//Profession
public:
	Equipment main_eq;
	Hero(std::string);
	~Hero() {};
	void print_info() const; 
	double attack(double) const; 
	void heal(int); 
	int coordinate_x() const; //combine in 1 func()
	int coordinate_y() const; 
	void stamina_regen(int); 
	bool Speak() const; 
	void damage_hero(double); 
	void stamina_consumption(); 
	void characteristic_up();
	void elquence_up(); 
	void sleep(double,double);
	void equipment_fill(); 
	void equipment_show();
	void equipment_heal_show(); 
	void equipment_weapon_show();
	void equipment_ammo_show(); 
	void equipment_alcohol_show(); 
	void equipment_food_show(); 
	void fill(); 
	int get_hp(); 
};
