#include <string>  
#pragma once
#define number_quests  1
struct Quest
{
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
	//equipment 
public:
	Hero(std::string);
	~Hero() {};
	void print_info() const; 
	double attack() const; 
	void heal(int); 
	int coordinate_x() const; //combine in 1 func()
	int coordinate_y() const; 
	void stamina_regen(int); 
	bool Speak() const; 
	void damage_hero(double); 
	void stamina_consumption(); 
	void characteristic_up();
	void elquence_up(); 
};
